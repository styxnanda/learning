#ifndef SEARCH_H
#define SEARCH_H

#include <iostream>
#include <set>
#include <vector>
#include <ctime>

std::vector<int> setupArraysAndMenu()
{
    srand(time(NULL));
    std::vector<int> numbers;
    std::set<int> seenNumbers;
    int randomSize{(rand() % 7) + 3};
    for (size_t loop{}; loop < randomSize; loop++)
    {
        int randomNumber;
        do
        {
            randomNumber = rand() % 50;
        } while (seenNumbers.find(randomNumber) != seenNumbers.end());

        seenNumbers.insert(randomNumber);
        numbers.push_back(randomNumber);
    }

    return numbers;
}

void printArray(std::vector<int> array)
{
    std::cout << "Array: [";
    for (auto num : array)
    {
        std::cout << num;
        std::cout << (num != array[array.size() - 1] ? ", " : "]\n");
    }
}

void linearSearch(std::vector<int> &numbers, int searched)
{
    for (size_t index{}; index < numbers.size(); index++)
    {
        if (searched == numbers[index])
        {
            std::cout << "-----> Number " << searched << " found at index: [" << index << "]\n\n";
            return;
        }
    }
    std::cout << "-----> " << searched << " not found\n\n";
}

void binarySearch(std::vector<int> &numbers, int searched)
{
    int low{0};
    int high{(int)numbers.size() - 1};
    while (low <= high)
    {
        int middle = low + (high - low) / 2;
        int middleValue = numbers[middle];

        if (middleValue < searched)
            low = middle + 1;
        else if (middleValue > searched)
            high = middle - 1;
        else
        {
            std::cout << "-----> Number " << searched << " found at index: [" << middle << "]\n\n";
            return;
        }
    }

    std::cout << "-----> " << searched << " not found\n\n";
};

#endif