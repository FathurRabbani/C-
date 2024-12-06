#include <iostream>
#include <thread>
#include <chrono>

// Fungsi yang akan dijalankan oleh thread
void threadFunction(volatile bool &flag) {
    std::cout << "Thread started, waiting for flag to change...\n";

    // Loop sampai flag berubah menjadi true
    while (!flag) {
        // Pengecekan terhadap flag yang bertipe volatile
        // volatile digunakan untuk memberitahu compiler untuk tidak mengoptimalkan
        // pengecekan terhadap nilai flag, karena nilainya bisa berubah di luar kontrol thread ini.
        std::this_thread::sleep_for(std::chrono::milliseconds(100));  // Tunggu 100ms
    }

    std::cout << "Thread finished, flag is now true.\n";
}

int main() {
    // Variabel flag yang bertipe volatile
    volatile bool flag = false;

    // Membuat thread yang akan menunggu perubahan flag
    std::thread t(threadFunction, std::ref(flag));

    std::this_thread::sleep_for(std::chrono::seconds(2));  // Tunggu 2 detik

    // Mengubah flag menjadi true setelah 2 detik
    std::cout << "Main thread: changing flag to true.\n";
    flag = true;

    // Tunggu sampai thread selesai
    t.join();

    std::cout << "Main thread finished.\n";
    return 0;
}
