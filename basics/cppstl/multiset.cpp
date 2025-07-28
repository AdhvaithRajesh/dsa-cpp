#include <iostream>
#include <set>
#include <string>

/*
combines the properties of unordered_multiset and set
i.e.
it is essentially a unordered_multiset (in that it allows storage of duplicates) while maintaining sorted order
logarithmic time complexity for all operations - O(log N)

when to use multisets?
- when you need to maintain a dynamic, sorted collection, and duplicates are meaningful
- sliding window problems
    - ex. find the median of all sub-arrays of size k
        - maintain a multiset of elements in current window
        - as window slides, insert new element, delete old one - O(log K)
        - since multiset is sorted, median can be found in O(1)
        - this solution is O(1 X log K) whereas an array based solution would be O(K log K) which is too slow

- leaderboards or ordered event tracking
    - used for keeping player's scores sorted - can quickly query ranks
    - keep in descending order
        - std::multiset<int, std::greater<int>> leaderboard;
    - use std::distance to find the rank
        long long players_with_better_score = std::distance(leaderboard.begin(), it);
    - rank is number of players with better score + 1

- "sorted bag" scenario
    - collection of items that might include duplicates that need to be sorted
*/

template <typename T>
void print_multiset(const std::multiset<T> &mset)
{
    for (const auto &element : mset)
    {
        std::cout << element << " ";
    }
    std::cout << "\n";
}

int main()
{
    std::multiset<int> int_mset = {20, 30, 10, 10, 30};
    print_multiset(int_mset);

    return 0;

    /*
    core operations
    .size()
    .insert() - O(log N) - adds new instance and places it in correct sorted position
    .count() - O(k + log N) - where k is the number of occurences
    .erase() - IMPORTANT
            - erase(value) - erases all occurences of that value
            - erase(iterator) - erases only the single element pointed to by that iterator

    MOST USEFUL FOR COMPETITIONS
    .lower_bound() and .upper_bound()
    .lower_bound() returns the iterator to smallest element larger than the passed value
    .upper_bound() returns the iterator to largest element smaller than passed value
    */
}