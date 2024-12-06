#include <iostream>      // Untuk output
#include <thread>        // Untuk thread
#include <sstream>       // Untuk format ID thread jadi string

// (Format ID): Kalau mau ID thread lebih readable dengan sedikit customisasi.
void incrementCounter() {
    // Gunakan stringstream untuk mengonversi ID thread jadi string
    std::ostringstream id_stream;
    id_stream << std::this_thread::get_id(); // Ambil ID thread dan konversi
    
    // Buat ID custom dari stringstream
    std::string custom_id = "Thread-" + id_stream.str();
    
    // Cetak ID custom
    std::cout << "Custom Thread ID: " << custom_id << std::endl;
}

int main() {
    // Membuat dua thread untuk menjalankan fungsi incrementCounter
    std::thread t1(incrementCounter);
    std::thread t2(incrementCounter);

    // Tunggu kedua thread selesai
    t1.join();
    t2.join();

    return 0;
}
