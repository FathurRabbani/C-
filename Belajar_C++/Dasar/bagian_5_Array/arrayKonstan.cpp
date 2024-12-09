#include <iostream>
#include <string>

// membuat string sebagai array konstan
const std::string namaHari[] = {
    "Senin",
    "Selasa",
    "Rabu",
    "Kamis",
    "Jum'at",
    "Sabtu",
    "Ahad"
};

int main(){
   // namaHari[2] = "bambang pamungkas";  error

    for(auto rentangLoop : namaHari){
        std::cout << "nama hari -" << rentangLoop << std::endl;
    }

    std::cin.get();
    return 0;
}