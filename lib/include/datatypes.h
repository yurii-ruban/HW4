#ifndef _DATATYPES_H
#define _DATATYPES_H

#include <cstdint>

#define BITS_PER_BYTE 8
#define SCIENTIFIC_COEFF 10
#define SCIENTIFIC_DIVIDER 1.0
#define Abs(x) ((x) < 0 ? -(x) : (x))

bool equals (const double& a, const double& b, uint8_t precision);

void setBit(int& src, uint8_t bit);

void revertBit(int& src, uint8_t bit);

bool addVector(const int* src1, const int* src2, int* dst, std::size_t size);

#endif