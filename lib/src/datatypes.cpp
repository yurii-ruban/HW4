#include "datatypes.h"

bool equals (const double& a, const double& b, uint8_t precision)
{
    bool result = false;

    return result;
}

/*The function sets a certain bit in a number to 1*/
void setBit(int& src, uint8_t bit)
{
    int const maskSize = sizeof(int);
    int const longInBits = maskSize * BITS_PER_BYTE;
    if(bit >=  longInBits)
    {
        return;
    }

    std::bitset<longInBits> set(src);
    set[bit] = 1;

    src = static_cast<int>(set.to_ulong());
}

void revertBit(int& src, uint8_t bit)
{
    int const maskSize = sizeof(int);
    int const longInBits = maskSize * BITS_PER_BYTE;

    if(bit >= longInBits)
    {
        return;
    }

    std::bitset<longInBits> set(src);
    !set[bit] ? set[bit] = 1 : set[bit] = 0;

    src = static_cast<int>(set.to_ulong());  
}

bool addVector(const int* src1, const int* scr2, std::size_t size_src, int* dst, std::size_t size_dst)
{
    bool result = false;
    return result;
}