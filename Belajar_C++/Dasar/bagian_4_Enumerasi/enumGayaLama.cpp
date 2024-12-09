#include <iostream>

// membuat enum gaya lama
enum namaWarna{
    merah,
    hijau,
    biru,
    kelabu,
    ungu,
};

int main()
{
    namaWarna pakaian = biru;
    std::cout << pakaian << std::endl;

    std::cin.get();
    return 0;
}