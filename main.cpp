#include "datatypes.h"
#include <iostream>
#include <iomanip>

void checkEqual()
{
    std::cout << "\t\t\tequals" << std::endl;

    double num1 = 2.03547415;
    double num2 = 2.03547428;
    const int minPrec = 0;
    const int maxPrec = 20;
    const int step = 1;

    for(int i = minPrec; i < maxPrec; i += step)
    {
        std::cout << "Precison " << i << ": " << std::fixed 
        << std::setprecision(i) << num1 << " == " << num2 
        << " (" << equals(num1, num2, i) << ")\n";
    }

    std::cout << std::endl;
}

void checkBitsOperations()
{
    std::cout << "\t\t\tsetBit-->revertBit" << std::endl;

    int masc = 12;
    const int bit = 9;
    std::cout << "Original state: " << masc << std::endl;

    setBit(masc, bit);
    std::cout << "After setting the " << bit << " bit to " << "1: " << masc << std::endl;

    revertBit(masc, bit);
    std::cout << "After reverting " << bit << " bit: " <<  masc << std::endl;
    
    std::cout << std::endl;
}

void checkAddVector()
{
    std::cout << "\t\t\taddVector" << std::endl;

    const int size = 5;

    int source1[size] = {1, 2, 3, 4, 5};
    int source2[size] = {-1, -2, -3, -4, -5};
    int destination[size];

    bool status = addVector(source1, source2, destination, size);

    if(status)
    {
        std::cout << "The resulting array: ";
        for(int i = 0; i < size; ++i)
        {
            std::cout << destination[i] << " ";
        }
    }
    else
    {
        std::cout << "Operation failed!!!" << std::endl;
    }
    std::cout << std::endl;
}

int main(int argc, char** argv)
{
    checkEqual();
    checkBitsOperations();
    checkAddVector();
    return 0;
}