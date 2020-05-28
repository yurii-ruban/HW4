#include "datatypes.h"

/* The function equals two doubles using it's precision */
bool equals (const double& a, const double& b, uint8_t precision)
{
    /* Calculation of allowed difference coeficient, depending on precision */
    /* I've tried to use scientific notation instead this crutch 
       but it requires literal as power and I've got compilation error. */

    int diffCoef = 1;
    while(precision-- > 0)
    {
        diffCoef*=SCIENTIFIC_COEFF;
    } 

    const double epsilon = SCIENTIFIC_DIVIDER / diffCoef;
    return Abs(a - b) <= epsilon ? true : false;
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

    src |= 1 << bit; // More interesting than bitsets     
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

    src ^= 1 << bit;
}

/* This function writes the sum of corresponging elements from first and second arrays to the third one */
bool addVector(const int* src1, const int* src2, int* dst, std::size_t size)
{
    for(int i = 0; i < size; ++i)
    {
        dst[i] = src1[i] + src2[i];
    }
    return true;
}