#include <iostream>
#include <string>

void printSeries(int n){
    int value = 0;
    int counter = 0;
    while(counter < n){
        std::cout << value << "," << (counter != n - 1 ? " " : " and so on...");
        counter++;
        value += counter;
    }
}

int main(){
    std::string input;
    int n;

    std::cout << "Input amount of numbers: ";
    std::getline(std::cin, input);

    n = std::stoi(input);
    
    printSeries(n);
    
    return 0;
}