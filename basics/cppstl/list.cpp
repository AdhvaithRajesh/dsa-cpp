#include <iostream>
#include <list>
#include <string>

/*
used when you need to perform frequent insertions/deletions to the middle of the sequence
it is a sequence container implemented as a doubly-linked list
    - each element is a separate node in memory that holds a value and pointers to the previous and next node

properties
- fast insertions/deletions
    - if you have iterator pointing to location, then can insert/delete in O(1) time
- no random access
    - biggest disadvantage
    - no [] or .at() accessing
    - must traverse list from the beginning which is slow - O(N)
- non-contiguous memory
    - elements are scattered across memory
    - less cache-friendly than vector/deque

When to use?
- extremely rare in competitive programming
- ideal use case when lot of insertions and deletions from front/back/when iterator available
- iterator stability - When inserting or removing elements, iterators to other elements in the list remain valid. This is not true for vector or deque.
- std::vector or std::deque almost always better choices even if they have worse theoretical complexity/insertion time
*/

template <typename T>
void print_list(const std::list<T> da_list)
{
    for (const auto &element : da_list)
    {
        std::cout << element << " ";
    }
    std::cout << "\n";
}

int main()
{
    std::list<int> l = {1, 2, 3, 4};

    // iteration works as normal
    print_list(l);

    // core operations
    // push_back(value) / pop_back(value)- add/remove element from the back
    // push_front(value) / pop_front(value) - add/remove element from the front
    // insert(iterator, value) - inserts element at a particular position
    // erase(iterator) - removes element from a particular position
    // sort() / splice() / reverse() - functions highly optimized for linked lists

    auto it = l.begin();
    std::advance(it, 2);

    l.insert(it, 25);

    print_list(l);
}