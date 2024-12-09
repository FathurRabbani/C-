#include <iostream>

// membuat sejumlah array dengan tipe data bentukan
typedef int sejumlahArray[5];

int main(){

    // deklarasi untuk nama sejumlah array
    sejumlahArray nilai, kelas, banyakSiswa;

    // mengisi nilai sejumlah array dengan loop
    for(auto rentangLoop = 1; rentangLoop <= 5; rentangLoop++){
        kelas[rentangLoop] = rentangLoop;
        nilai[rentangLoop] = rentangLoop * 30;
        banyakSiswa[rentangLoop] = rentangLoop + 40;
    }

    // menampilkan array nilai dengan loop
    for(auto loopN : nilai){
        std::cout << "nilai : " << loopN << std::endl;
    }

     // menampilkan array kelas dengan loop
    for(auto loopK : kelas){
        std::cout << "Kelas : " << loopK << std::endl;
    }

     // menampilkan array banyaknya siswa dengan loop
    for(auto loopBS : banyakSiswa){
        std::cout << "banyaknya siswa adalah : " << loopBS << std::endl;
    }

    std::cin.get();
    return 0;
}