#include "datatypes.h"
#include <iostream>

void checkBitsOperations()
{
    int masc = 12;
    const int bit = 9;
    std::cout << "Original state: " << masc << std::endl;

    setBit(masc, bit);
    std::cout << "After setting the " << bit << " bit to " << "1: " << masc << std::endl;

    revertBit(masc, bit);
    std::cout << "After reverting " << bit << " bit: " <<  masc << std::endl;
}

int main(int argc, char** argv)
{
    checkBitsOperations();
    return 0;
}