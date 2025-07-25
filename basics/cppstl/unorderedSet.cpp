#include <iostream>
#include <unordered_set>
#include <string>

/*
Only stores unique elements
No order of elements - if iterated through, might generate elements in seemingly random sequence
super fast - adding, removing, checking for element takes O(1) time because it is built using a hash table internally

where can unordered sets be used?

finding duplicates - LeetCode problem
iterate through array, check count() to see if it exists
- if it exists - duplicate found
- otherwise insert to set

seen before problems
problems which involve processing a sequence of items which require to know if they've been seen before
ex. finding a cycle in a linked list

Two Sum Problem Variant: Given an array of numbers nums and a target k, find if there exist two numbers a and b in nums such that a + b = k.
Solution: Iterate through nums. For each number x, check if k - x is in your unordered_set. If it is, you've found a pair. If not, add x to the set and continue. The O(1) lookup makes the whole algorithm O(N).

unordered set uses a hashtable internally
set uses a balanced binary search tree

unordered set is unordered
ordered set is sorted in ascending order

unordered set has O(1) speed for insert, count(), find(), erase() operations
set has O(log N) speed for all operations

use unordered_set when speed is the key and order is irrelevant(most cases)
use set when elements need to be sorted - finding next smallest/largest element
*/

template <typename T> // uses template to accept any type T
// template works for any type for which << is defined
void print_unordered_set(const std::unordered_set<T> &da_unorda_set) // & to pass as reference - no copying, const so no changes
{
    for (const auto &element : da_unorda_set) // same reason for const and &
    {
        std::cout << element << " ";
    }
    std::cout << "\n";
}

int main()
{
    std::unordered_set<int> num_set;
    std::unordered_set<std::string> str_set;

    std::unordered_set<int> initial_set = {10, 20, 30, 40, 10}; // second 10 is ignored

    std::cout << "Size of initial set: " << initial_set.size() << std::endl; // will return 4

    /*
    Core operations - average O(1) worst O(N) - unlikely, unless test data is designed to cause hash collisions
    insert() - adding elements
    find(), count() - checking for existence
    erase()- removing elements
    */

    // insert()
    num_set.insert(5);
    num_set.insert(7);
    num_set.insert(9);

    print_unordered_set(num_set);

    // find() - returns iterator to element if found, returns .end() iterator if element not found

    if (num_set.find(8) != num_set.end())
    {
        std::cout << "Element is present in the set\n";
    }
    else
    {
        std::cout << "Element is not present in the set\n";
    }

    std::cout << "\n";

    // count() - recommended for easier readability, returns 1 if element exists, 0 if it doesn't

    if (num_set.count(9))
    {
        std::cout << "Element is present in the set\n";
    }
    else
    {
        std::cout << "Element is not present in the set\n";
    }

    std::cout << "\n";

    // erase() - if present, removes element, nothing happens if element is not present

    num_set.erase(8);
    num_set.erase(9);

    print_unordered_set(num_set);

    // size() - returns the size of the unordered set

    std::cout << "Size of num_set: " << num_set.size() << "\n";

    // empty() - returns true if set is empty, false otherwise

    std::cout << "Is num_set empty? " << num_set.empty() << "\n";

    return 0;
}