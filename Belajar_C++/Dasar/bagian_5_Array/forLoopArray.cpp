#include <iostream>

int main()
{
    int Nilai[5] = {88, 85, 54, 64, 12}; // deklarasi array

    // loop yang menelurusi array
    for(auto rentangLoop : Nilai){
        std::cout << "Nilai Siswa x - " << rentangLoop << std::endl;
    }

    std::cin.get();
    return 0;
}