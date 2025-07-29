#include <iostream>
#include <deque>
#include <string>

/*
sequence container that allows for fast insertions and deletions at both the beginning and the end
behaves like the vector but with efficient push/pop operations

properties
- double-ended - O(1) time complexity for inserting/deleting elements from front and back
- fast-index based access like a vector using [] or .at() in O(1) time
- non-contiguous memory
    - unlike vector, not stored in a single block of memory
    - uses sequence of small, fixed-size arrays
    - allows for efficient front operations, but slightly slower for index-based access

When to use deque?
- sliding window minimum/maximum
    - most popular use-case of deque in competitive programming
    - find maximum/minimum element in every subarray of size k
    - deque used to maintain list of candidate indices
        - double ended nature helps with adding and discarding from both ends

- implementing queue or stack but with iteration
    - std::stack and std::queue are wrappers around std::deque
    - since it is the underlying container, it can be used to implement either of these with iteration
*/

template <typename T>
void print_deque(std::deque<T> dis_deque)
{
    for (const auto element : dis_deque)
    {
        std::cout << element << " ";
    }
    std::cout << "\n";
}

int main()
{
    std::deque<int> small_deque;
    // adding elements to the front
    small_deque.push_front(1);
    small_deque.push_front(2);
    small_deque.push_front(3);

    std::cout << "After adding elements to the front: ";
    print_deque(small_deque);

    // adding elements to the back
    small_deque.push_back(0);
    small_deque.push_back(-1);
    small_deque.push_back(-2);

    std::cout << "After adding elements to the back: ";
    print_deque(small_deque);

    // access front or back elements
    std::cout << "Front: " << small_deque.front() << "\n";
    std::cout << "Back: " << small_deque.back() << "\n";

    // remove elements from front and back
    small_deque.pop_front();
    small_deque.pop_back();

    print_deque(small_deque);
}