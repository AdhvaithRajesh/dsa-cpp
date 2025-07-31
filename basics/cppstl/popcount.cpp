#include <iostream>
#include <bit>

/*
__builtin_popcount() is used for quickly calculating the number of set bits in an integer
non-standard, built-in function provided by GCC and Clang that compiles down to a single highly optimized hardware instruction
much faster than manual counting loops

key properties
compiler built-in - not part of C++ STL, feature of GCC and Clang
fast - uses POPCNT assembly instruction on modern CPUs - extremely fast
integer sizes - __builtin_popcount(int), __builtin_popcountl(long), __builtin_popcountll(long long)
    - third one is crucial for 64 bit numbers in programming competitions

C++20 alternative - std::popcount
    - this is the preferred method for newer version of C++

When to use popcount?
- Bitmasking problems
    - dynamic programming problems on subsets
    - where you use an integer as a bitmask to represent a set
    - popcount quickly tells the size of the subset
- counting differences
    - the number of differing bits between two numbers a and b - i.e. the hamming distance
- any problem requiring binary representation

*/

int main()
{
    int set_bits_in_13 = __builtin_popcount(13);
    int set_bits_in_100 = __builtin_popcountll(100);

    std::cout << "Built-in:\n";
    std::cout << set_bits_in_13;
    std::cout << set_bits_in_100;

    // works only with C++20 and above
    std::cout << "std::popcount\n";
    std::cout << std::popcount(unsigned(13)) << "\n";
}