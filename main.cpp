#include "datatypes.h"
#include <iostream>

void checkEqual()
{
    std::cout << "\t\t\tDouble comparator" << std::endl;

    double num1 = 2.03547415;
    double num2 = 2.03547428;
    const int minPrec = 1;
    const int maxPrec = 20;
    const int step = 3;

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
    std::cout << "\t\t\tBits modifier" << std::endl;

    int masc = 12;
    const int bit = 9;
    std::cout << "Original state: " << masc << std::endl;

    setBit(masc, bit);
    std::cout << "After setting the " << bit << " bit to " << "1: " << masc << std::endl;

    revertBit(masc, bit);
    std::cout << "After reverting " << bit << " bit: " <<  masc << std::endl;
    
    std::cout << std::endl;
}

int main(int argc, char** argv)
{
    checkEqual();
    checkBitsOperations();
    return 0;
}