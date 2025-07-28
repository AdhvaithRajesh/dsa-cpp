#include <iostream>
#include <unordered_map>
#include <string>

/*
Powerful, one of the most frequently used tools in problem solving
stores elements in key-value pairs, like a dictionary, where the keys are unique
unordered - hash table implementation
fast - hash table implementation

when to use unordered maps?
- frequency counting - most common use case
    - count occurences of an item in a list, array, string
        - majority element problem
- two sum problem
    - given an array nums and a target, find two numbers that add up to the target
    - using unordered_map provides O(N) solution
    - solution
        - iterate through the array
        - for each number x, find target - x
        - if target - x is already in the map, then found the pair
        - if not, add x and its index to the map
- caching / memoization
    - In dynamic programming, you can use a map to store the results of subproblems to avoid re-computing them.
        - The key is the input to the subproblem, and the value is its result.
*/

template <typename T>
void print_unordered_map(std::unordered_map<T, T> &umap)
{
    for (const auto &[key, value] : umap)
    {
        std::cout << key << ": " << value << "\n";
    }
}

int main()
{
    // declaration
    std::unordered_map<std::string, int> fruit_counts;

    // initialization / insertion of values
    fruit_counts["apple"] = 2;
    fruit_counts["orange"] = 900;
    fruit_counts["banana"] = 10400;

    // if the key doesn't exist, it is created with the default value - here, 0
    fruit_counts["blueberry"]++;

    // initialization using initializer list
    std::unordered_map<std::string, double> fruit_prices = {
        {"apple", 0.5},
        {"banana", 0.2},
        {"orange", 0.7}};

    // since [] can create new keys, we need a safe way to check if a key exists in the dictionary
    // .count(key) - returns 1 if it exists, returns 0 otherwise
    // .find(key) - returns iterator pointing to the key-value pair if it exists, returns .end() otherwise

    if (fruit_counts.count("apple"))
    {
        std::cout << "There are " << fruit_counts["apple"] << " apple(s) available\n";
    }

    if (fruit_prices.find("redberry") == fruit_prices.end())
    {
        std::cout << "what a redberry, dawgie?\n";
    }

    // remove a key-value pair using erase()
    fruit_counts.erase("apple");

    // iterating through a map can be done using range based for and structured bindings
}