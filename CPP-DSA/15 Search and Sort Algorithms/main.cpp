#include <iostream>
#include <vector>
#include "search.h"
#include "sort.h"

int main()
{
    int inputNumber;
    std::vector<int> numbers = setupArraysAndMenu();
    while (1)
    {
        // std::sort(numbers.begin(), numbers.end()); // STL sorting
        printArray(numbers);
        // std::cout << "Please enter a number to be searched: ";
        // std::cin >> inputNumber;
        // Linear search implementation
        // linearSearch(numbers, inputNumber);

        // Binary search implementation
        // binarySearch(numbers, inputNumber);

        // Bubble sort
        // bubbleSort(numbers);

        // Selection sort
        // selectionSort(numbers);

        // TO-DO
        // insertionSort(numbers);
        printArray(numbers);
        break;
    }
    return 0;
}