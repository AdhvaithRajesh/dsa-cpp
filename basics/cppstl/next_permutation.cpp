#include <iostream>
#include <vector>
#include <algorithm>

/*
built-in algorithm that rearranges a sequence into its next lexicographically greater permutation
ex. [1,2,3] -> next greater permutation -> [1,3,2]

key properties
- in place
    - modifies the container directly
- return value
    - true, if a greater permutation was found
    - false, if the current sequence is the last possible permutation
    - when it returns false, it rearranges sequence back to lowest possible order

When to use?
- Brute force solutions
    - when you need to check a condition against all possible arrangements of a small number of items
- Travelling salesman problem
    - for a small number of cities, find shortest path by generating every permutation and calculating distance
- anagram problems
    - finding the next lexicographically larger string using same set of characters
*/

template <typename T>
void print_vector(const std::vector<T> da_vecta)
{
    for (const auto &element : da_vecta)
    {
        std::cout << element << " ";
    }
    std::cout << "\n";
}

int main()
{
    std::vector<int> v = {1, 2, 3};

    std::sort(v.begin(), v.end()); // to start from the very first permutation
    print_vector(v);

    std::cout << "\nOther Permutations: \n";
    while (std::next_permutation(v.begin(), v.end()))
    {
        print_vector(v);
    }
}