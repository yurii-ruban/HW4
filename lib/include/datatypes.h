#include <cstdint>

bool equals (const double& a, const double& b, uint8_t precision);

void setBit(int& src, uint8_t bit);

void revertBit(int& src, uint8_t bit);

bool addVector(const int* src1, const int* scr2, std::size_t size_src, int* dst, std::size_t size_dst);