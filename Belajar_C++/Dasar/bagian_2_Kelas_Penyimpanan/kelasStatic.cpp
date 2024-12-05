#include <iostream>

// membuat fungsi tes penyimpanan Static
void fungsiKelasStatic();

int main(){
    // kelas penyimpanan Static
    int NilaiSiswa = 87; // tipe data ini menggunakan kelas penyimpanan Static
    
    // output
    std::cout << "nilai budi : " << NilaiSiswa << std::endl; // menampilkan nilai 87

    // memanggil fungsi
    std::cout << "pemanggilan pertama " << std::endl;
    fungsiKelasStatic();
    std::cout << "pemanggilan kedua " << std::endl;
    fungsiKelasStatic();
    std::cout << "pemanggilan ketiga " << std::endl;
    fungsiKelasStatic();

    return 0;
}

void fungsiKelasStatic(){
    static int nilaiAngka = 0; // menyimpan angka 0
    nilaiAngka++; // menambahkan variabel dengan satu angka
    std::cout << "nilai angka : " << nilaiAngka << std::endl; // menampilkan nilai bilangan 
}