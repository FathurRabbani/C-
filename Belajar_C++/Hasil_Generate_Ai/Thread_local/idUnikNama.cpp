#include <iostream>  // Untuk output
#include <thread>    // Untuk thread
#include <map>       // Untuk menyimpan nama thread
#include <mutex>     // Untuk sinkronisasi thread saat mengakses map

// (Nama Custom): Kalau butuh nama yang lebih human-friendly.
// Map untuk menyimpan nama thread berdasarkan ID-nya
std::map<std::thread::id, std::string> thread_names;

// Mutex untuk mencegah race condition saat memodifikasi map
std::mutex thread_map_mutex;

// Fungsi untuk menetapkan nama thread
void setThreadName(const std::string& name) {
    // Mengunci akses ke map selama modifikasi
    std::lock_guard<std::mutex> lock(thread_map_mutex);
    thread_names[std::this_thread::get_id()] = name; // Simpan nama thread
}

// Fungsi untuk mengambil nama thread
std::string getThreadName() {
    // Mengunci akses ke map selama membaca
    std::lock_guard<std::mutex> lock(thread_map_mutex);
    auto id = std::this_thread::get_id(); // Dapatkan ID thread saat ini
    // Jika nama thread ditemukan, kembalikan namanya; jika tidak, kembalikan "Unknown"
    return thread_names.count(id) ? thread_names[id] : "Unknown";
}

// Fungsi yang dijalankan oleh thread
void incrementCounter(const std::string& name) {
    setThreadName(name); // Tetapkan nama untuk thread ini
    std::cout << "Thread Name: " << getThreadName() << std::endl;
}

int main() {
    // Membuat dua thread dengan nama unik
    std::thread t1(incrementCounter, "Worker-1");
    std::thread t2(incrementCounter, "Worker-2");

    // Tunggu kedua thread selesai
    t1.join();
    t2.join();

    return 0;
}
