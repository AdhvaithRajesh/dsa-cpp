#include <iostream>
#include <algorithm>
#include <vector>

/*
when you need to sort a sequence of elements
highly efficient, general purpose algorithm
arranges elements by default in a non-decreasing order

key properties
- hybrid algorithm - introsort(mix of quicksort, heapsort, insertion sort)
    - average time complexity of O(N log N)
- in place sorting
    - sorts the container directly
- random access is required
    - works with std::vector, std::deque
    - does not work with std::list

when to use?
- greedy algorithms
    - they require input to be sorted first
- searching
    - after sorting, can do fast search algorithms - binary search, lower bound
- simplifying problems
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
    std::vector<int> v = {17, 29, 28, 4, 5, 1};
    print_vector(v);

    std::cout << "\nAfter sorting(default):\n";
    std::sort(v.begin(), v.end());
    print_vector(v);

    std::cout << "\nAfter sorting(descending order)\n";
    std::sort(v.begin(), v.end(), std::greater<int>()); // using built-in comparator
    print_vector(v);

    // can also provide custom lambda function for sorting
    std::cout << "pair of vectors: \n";
    std::vector<std::pair<int, int>> pairs = {{1, 50}, {2, 30}, {3, 40}};
    print_vector(pairs);

    // compares second numbers
    std::sort(pairs.begin(), pairs.end(), [](const auto &a, const auto &b)
              { return a.second < b.second; });
}