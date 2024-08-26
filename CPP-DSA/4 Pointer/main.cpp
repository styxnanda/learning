#include <iostream>

#define VECTOR_AMOUNT 2

void crossProduct(int *vector1, int *vector2, int dimension)
{
    for (size_t k{}; k < dimension; k++)
    {
        vector1[k] *= vector2[k];
    }
}

void printVectors(int *vector1, int *vector2, int dimension)
{
    for (size_t i{}; i < VECTOR_AMOUNT; i++)
    {
        std::cout << "Elemen vektor " << i + 1 << " secara berurutan: { ";
        for (size_t j{}; j < dimension; j++)
        {
            switch (i)
            {
            case 0:
            {
                std::cout << vector1[j] << " ";
            }
            break;
            case 1:
            {
                std::cout << vector2[j] << " ";
            }
            break;
            default:
            {
                std::cout << "ERROR";
            };
            }
        }
        std::cout << "}" << std::endl;
    }
};

int main()
{
    int inputDimension; // Vector dimension

    while (1)
    {
        std::cout << "Masukkan dimensi kedua vektor: ";
        std::cin >> inputDimension;
        if (inputDimension >= 2)
        {
            break;
        }
        else
        {
            std::cout << "Dimensi salah, mohon ulang kembali" << std::endl;
        }
    }

    try
    {
        int *vector1{new int[inputDimension]};
        int *vector2{new int[inputDimension]};
        for (size_t i{}; i < VECTOR_AMOUNT; i++)
        {
            std::cout << "Masukkan elemen vektor " << i << " secara berurutan: ";
            for (size_t j{}; j < inputDimension; j++)
            {
                switch (i)
                {
                case 0:
                {
                    std::cin >> vector1[j];
                }
                break;
                case 1:
                {
                    std::cin >> vector2[j];
                }
                break;
                }
            }
        }
        // std::cout << vector1 << std::endl;
        // std::cout << vector2 << std::endl;
        std::cout << "SEBELUM PERKALIAN" << std::endl;
        printVectors(vector1, vector2, inputDimension);

        // Perkalian
        crossProduct(vector1, vector2, inputDimension);

        std::cout << "SESUDAH PERKALIAN" << std::endl;
        printVectors(vector1, vector2, inputDimension);

        delete[] vector1;
        vector1 = nullptr;
        delete[] vector2;
        vector2 = nullptr;
    }
    catch (std::exception &ex)
    {
        std::cout << "Exception occured: " << ex.what() << std::endl;
    }

    return 0;
}