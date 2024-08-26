#include <iostream>
#include <cmath>

void checker(int number){    
    bool met{false};
    if(number % 2 == 0){
        met = true;
        std::cout << "Genap";
    }
 
    if(std::pow(2, static_cast<int>(std::log2(number))) == number){
        met = true;
        std::cout << "Kuadrat";
    }
    (met ? std::cout << std::endl : std::cout << "Bukan genap/kuadrat" << std::endl);
}

int main(){
    int number; // garbage value
    bool remain{true};
    while(remain){
        std::cout << "Masukkan angka (angka <= 0 untuk keluar): ";
        std::cin >> number;
        if(number <= 0){
            remain = false; 
        } else {
            checker(number);
        }
    }
    return 0;
}