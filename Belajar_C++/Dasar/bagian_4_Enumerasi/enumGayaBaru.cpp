#include <iostream>
#include <string>

const std::string hariNama[] = {
    "Senin",
    "Selasa",
    "Rabu",
    "Kamis",
    "Jum'at",
    "Sabtu",
    "Ahad"
};

// membuat enum gaya baru dengan class
enum class namaHari{
    Senin,
    Selasa,
    Rabu,
    Kamis,
    Jumat,
    Sabtu,
    Ahad
};

int main ()
{
    // deklarasi enum
    namaHari hariLahir = namaHari::Jumat;
    std::cout << "hari lahir " << hariNama[(int) hariLahir] << std::endl;

    std::cin.get();
    return 0;
}