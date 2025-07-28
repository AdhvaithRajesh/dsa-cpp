#include <iostream>
#include <string>
#include <unordered_set>

/*
hash-table based container that stores elements in an unordered fashion
but allows duplicate elements
fast operations - just like unordered set - O(1)

When is an unordered multiset used?
- less common than vectors, sets, unordered_sets
- frequency counting (as an alternative to map) - instead of mapping element to count, store elements directly
    - this is a simpler solution. unordered_maps are more powerful since we can associate data with count, easily iterate through unique keys
- anagram checking
    - add elements of s1 into an unordered_multiset
    - iterate through elements of s2 and remove from s1
        - if .find() returns .end() - not an anagram
        - if loop is complete and set is empty - anagram
- bag semantics
    - any problem where intersection or difference needs to be found while respecting duplicates
    - ex. A = {1, 2, 2}, B = {2, 2, 3}
    - intersection = {2, 2} - this can easily be found using unordered_multiset
*/

template <typename T>
void print_unordered_multiset(const std::unordered_multiset<T> &mset)
{
    for (const auto &element : mset)
    {
        std::cout << element << " ";
    }
    std::cout << "\n";
}

int main()
{
    // declaration and initialization
    std::unordered_multiset<int> int_umset = {10, 20, 10, 30, 10, 20, 30};

    print_unordered_multiset(int_umset);

    std::cout << "Total size of this unordered multiset is: " << int_umset.size() << "\n\n";

    /*
    core operations
    insert() - similar to the one with unordered set, but adds element even if it already present
    count() - more powerful than regular set - returns total number of occurences of that element
    erase() - IMPORTANT
            - erase(value) - erases all occurences of that value
            - erase(iterator) - erases only the single element pointed to by that iterator
    */

    std::cout << "Set before int_umset.erase(10):\n";
    print_unordered_multiset(int_umset);
    std::cout << "Number of 10s before int_umset.erase(10): ";
    std::cout << int_umset.count(10) << "\n\n";

    int_umset.erase(10);
    std::cout << "Set after int_umset.erase(10):\n";
    print_unordered_multiset(int_umset);
    std::cout << "Number of 10s after int_umset.erase(10): ";
    std::cout << int_umset.count(10) << "\n\n";

    std::cout << "Using an iterator to erase an element - 20\n";
    std::cout << "Number of 20s before int_umset.erase(iterator): ";
    std::cout << int_umset.count(20) << "\n\n";
    auto it = int_umset.find(20); // returns iterator to the first occurence of the argument
    if (it != int_umset.end())
    {
        int_umset.erase(it);
    }
    print_unordered_multiset(int_umset);
    std::cout << "Number of 20s after int_umset.erase(iterator): ";
    std::cout << int_umset.count(20);
    return 0;
}