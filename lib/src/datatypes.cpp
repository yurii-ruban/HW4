#include "datatypes.h"

/* The function equals two doubles using it's precision */
bool equals (const double& a, const double& b, uint8_t precision)
{
    std::stringstream s;
    s << std::fixed << std::setprecision(precision) << a << ' '<< b;
    std::string str1, str2;
    s >> str1 >> str2;

    return str1 == str2;
}

/* The function sets a certain bit in a given number to 1 */
void setBit(int& src, uint8_t bit)
{
    int const maskSize = sizeof(int);
    int const longInBits = maskSize * BITS_PER_BYTE;
    if(bit >=  longInBits) //Note, the bit cannot be more or equal than size of type
    {
        return;
    }

    std::bitset<longInBits> set(src);
    set[bit] = 1;

    /* Back conversion to int */
    src = static_cast<int>(set.to_ulong());
}

/* The function reverts a certain bit in a given number */
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

/* This function writes the sum of corresponging elements from first and second arrays to the third one */
bool addVector(const int* src1, const int* src2, std::size_t size_src, int* dst, std::size_t size_dst)
{
    if(size_src != size_dst)
    {
        return false;
    }

    for(int i = 0; i < size_src; ++i)
    {
        dst[i] = src1[i] + src2[i];
    }
    return true;
}