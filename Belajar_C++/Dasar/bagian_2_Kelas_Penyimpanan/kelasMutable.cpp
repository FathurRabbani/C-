#include <iostream>

// membuat class
class Contoh{
    public:
        mutable int nilaiA; // anggota keals dengan penyimpanan mutable
        int nilaiB; // anggota kelas non-mutable
        Contoh(int nilaiA, int nilaiB){
            this -> nilaiA = nilaiA;
            this -> nilaiB = nilaiB;
        }
};

int main(){
    // membuat objek konstan dari kelas contoh
    const Contoh obj(20, 30);

    // menampilkan nilai a dan b di dalam obj sebelum diubah
    std::cout << "variabel const sebelum diubah" << std::endl;
    std::cout << "nilai A : " << obj.nilaiA << std::endl;
    std::cout << "nilai B : " << obj.nilaiB << std::endl;

    // mengubah nilai a
    obj.nilaiA = 2000; // const obj nilai a bisa diubah karena bersifat mutable

    // mengubah nilai b
   // obj.nilaiB = 89; // const obj nilai b tidak bisa dirubah karena bersifat non-mutable

    // menampilkan nilai a dan b di dalam obj setelah diubah
    std::cout << "variabel const setelah diubah" << std::endl;
    std::cout << "nilai A : " << obj.nilaiA << std::endl;
    std::cout << "nilai B. tidak dapat diubah karena non mutable : " << obj.nilaiB << std::endl;

    std::cin.get();
    return 0;
}