#ifndef SORT_H
#define SORT_H

#include <iostream>
#include <set>
#include <vector>

void bubbleSort(std::vector<int> &numbers)
{
    for (size_t i{}; i < numbers.size() - 1; i++)
    {
        for (size_t j{}; j < numbers.size() - i - 1; j++)
        {
            if (numbers[j] < numbers[j + 1])
            {
                int temp{numbers[j]};
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
}

void selectionSort(std::vector<int> &numbers)
{
    for (size_t i{}; i < numbers.size() - 1; i++)
    {
        int min{(int)i};
        for (size_t j{i + 1}; j < numbers.size(); j++)
        {
            if (numbers[min] > numbers[j])
            {
                min = j;
            }
        }

        int temp{numbers[i]};
        numbers[i] = numbers[min];
        numbers[min] = temp;
    }
}

void insertionSort(std::vector<int> &numbers)
{
    // TO-DO
    // To be implemented
}

#endif