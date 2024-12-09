#include <iostream>

// membuat array global
int rataRataNilai[5] = {89, 92 95, 97, 100};
// rataRataNilai[0] = 89;
// rataRataNilai[1] = 92;
// rataRataNilai[2] = 95;
// rataRataNilai[3] = 97;
// rataRataNilai[4] = 100;

int main(){
    for(auto i = 0; i < 5; i++){
        std::cout << "nilai ke - " << i << " adalah " << rataRataNilai[i] << std::endl;
    }

    std::cin.get();
    return 0;
}