#include <iostream>
#include <set>
#include <string>

/*
similar to unordered_set
contains unique elements in a sorted order
logarithmic time complexity - interally implemented as a balanced binary tree (red-black tree)
    - insertion, deletion, searching takes logarithmic time - O(log N)
    - slightly slower than unordered sets which offer O(1) for the same operations
    - but provide the benefit of sorting

When to use?
- when you need a sorted collection of unique items
- finding the closest element in the collection
- next largest / previous smallest problems

*/

template <typename T>
void print_set(const std::set<T> &da_set)
{
    for (const auto &element : da_set)
    {
        std::cout << element << " ";
    }
    std::cout << "\n";
}

int main()
{
    // declaration
    std::set<int> num_set;
    std::set<std::string> string_set;

    // initialization
    std::set<int> initial_set = {100, 2, 50, 2}; // second 2 is ignored, set automatically sorts elements

    /*
    Core operations
    insert() - O(log N) - inserts an element in the correct position
    find() - O(log N) - returns iterator to element if found, otherwise .end()
    count() - O(log N) - returns 1 if element exists, 0 otherwise
    erase() - O(log N) - removes an element
    size(), empty(), clear() - just like other containers, size() is O(1)
    iteration - always in ascending order

    above same as with unordered_set

    MOST USEFUL FOR COMPETITIONS
    .lower_bound() and .upper_bound()
    .lower_bound() returns the iterator to smallest element larger than the passed value
    .upper_bound() returns the iterator to largest element smaller than passed value
    */

    std::cout << *initial_set.lower_bound(25) << "\n"; // will return iterator  to largest number smaller than 25 -> 2
    std::cout << *initial_set.upper_bound(51) << "\n"; // will return iterator to smallest number larger than 51 -> 100

    return 0;
}