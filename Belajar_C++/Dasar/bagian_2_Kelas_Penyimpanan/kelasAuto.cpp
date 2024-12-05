#include <iostream>

// membuat fungsi tes penyimpanan auto
void fungsiKelasAuto();

int main(){
    // kelas penyimpanan auto atau default
    int NilaiSiswa = 87; // tipe data ini menggunakan kelas penyimpanan auto atau default
    
    // output
    std::cout << "nilai budi : " << NilaiSiswa << std::endl; // menampilkan nilai 87

    // memanggil fungsi
    std::cout << "pemanggilan pertama " << std::endl;
    fungsiKelasAuto();
    std::cout << "pemanggilan kedua " << std::endl;
    fungsiKelasAuto();
    std::cout << "pemanggilan ketiga " << std::endl;
    fungsiKelasAuto();

    std::cin.get();
    return 0;
}

void fungsiKelasAuto(){
    int nilaiAngka = 0; // menyimpan angka 0
    nilaiAngka++; // menambahkan variabel dengan satu angka
    std::cout << "nilai angka : " << nilaiAngka << std::endl; // menampilkan nilai bilangan 
}