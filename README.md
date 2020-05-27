
# Homework task 4

This project contains a binary and static library with implemented custom functional.

  

## Implemented interfaces

 - `bool equals(double, double, unit8_t precision) `--- returns true if two given numbers are equal. Precision is used to control the comparison.

- `void setBit(int& src, uint8_t bit)` --- takes an integer `src` and sets specific bit to 0 or 1.

- `void revertBit(int& src, uint8_t bit)` --- takes an integer `src` and reverts specified bit in it.

- `bool addVector(const int* src1, const int* src2, size, int* dts, std::size_t size);` --- takes 2 arrays with size elements, adds each item of array `src1` to corresponding element of array `src2` and puts the result in array `dst`.

## How to check

1. `cd` to root of the repository and `mkdir build`;
2. `cmake -H. -Bbuild`
3. `./build/testapp` 