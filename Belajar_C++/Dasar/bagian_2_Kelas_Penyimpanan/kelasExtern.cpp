#include <iostream>
#include "fileExtern.cpp"

// memanggil variabel nilai a pada file extern
extern short nilaiA;

int main(){
    std::cout << "sebelum nilai a file extern dinaikkan : " << std::endl;
    std::cout << "nilai variabel a : " << nilaiA << std::endl;

    // memangil fungsi kelas extern
    incrementNilaiA();

    std::cout << "setelah nilai a file extern dinaikan :" << std::endl;
    std::cout << "nilai variabel a : " << nilaiA << std::endl;

    std::cin.get();
    return 0;
}