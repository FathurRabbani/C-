#include <iostream>

int main(){
    // register pada c++ 17 dihilangkan
    // inisialisasi kelas penyimpanan register pada variabel
    register int nilai = 1; 

    // inisialisasi kelas penyimpanan register pada forloop
    for(register int rentang = 1; rentang <= 20; ++i){
        nilai += 1;
    }

    std::cout << "memanggil  hasil perhitungan loop menggunakan file variabel register yang disimpan di cpu" << std::endl;
    std::cout << "nilai register : " << nilai << std::endl;

    std::cin.get();
    return 0;
}