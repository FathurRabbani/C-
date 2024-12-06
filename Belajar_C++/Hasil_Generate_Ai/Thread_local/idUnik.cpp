#include <iostream>       // Untuk output ke konsol
#include <thread>         // Untuk multithreading
#include <unordered_map>  // Untuk struktur hash map

//  (Hash): Kalau mau ID thread terlihat panjang dan unik.
// thread_local variabel: masing-masing thread punya salinan terpisah
thread_local int counter = 0;

void incrementCounter() {
    counter++; // Increment counter milik thread ini
    auto thread_id = std::this_thread::get_id(); // Ambil ID thread saat ini
    
    // Generate hash unik dari thread ID
    std::size_t hash_id = std::hash<std::thread::id>()(thread_id);
    
    // Tampilkan hash ID thread dan nilai counter
    std::cout << "Thread Hash ID: " << hash_id 
              << " Counter: " << counter << std::endl;
}

int main() {
    // Membuat dua thread yang menjalankan fungsi incrementCounter
    std::thread t1(incrementCounter);
    std::thread t2(incrementCounter);

    // Tunggu kedua thread selesai
    t1.join();
    t2.join();

    return 0;
}
