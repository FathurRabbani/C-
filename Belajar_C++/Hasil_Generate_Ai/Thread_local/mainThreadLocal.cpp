#include <iostream>
#include <thread>

// inisalisasi variabel dengan kelas penyimpanan thread local
thread_local int perhitungan = 0;

// membuat fungsi thread
void fungsiThread(){
    perhitungan++;
    std::cout << "ID thread : " << std::this_thread::get_id() << " perhitungan : " << perhitungan << std::endl; // mengambil id thread
}

int main(){
    std::thread t1(fungsiThread); // memasukan fungsi thread ketiga
    std::thread t2(fungsiThread); // memasukan fungsi thread kedua

    t1.join(); // fungsi untuk menungu menyelesaikan thread
    t2.join(); // fungsi untuk menungu menyelesaikan thread

    std::cin.get();
    return 0;
}