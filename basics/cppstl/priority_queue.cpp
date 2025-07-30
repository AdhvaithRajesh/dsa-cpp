#include <iostream>
#include <queue>
#include <string>

/*
provides instant access to the largest or smallest element in a collection
by default - largest value has highest priority

Key properties
- Highest priority out - order of removal depends on priority, not when the element was inserted
- Max-heap by default - implemented using a heap data-structure
    - top() will return the greatest element
- Logarithmic time complexity
    - pushing and removing top element takes O(log N) since heap needs to be restructured
    - accessing top element is O(1)
*/

int main()
{
    // default max-priority queue
    std::cout << "Max-Priority Queue\n";
    std::priority_queue<int> pq;
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(5);

    // top() returns reference to highest priority element - largest element
    std::cout << "Highest priority element in default queue: " << pq.top() << "\n";
    std::cout << "Popping " << pq.top() << "\n";
    pq.pop();
    std::cout << "Highest priority element in default queue: " << pq.top() << "\n";

    std::cout << "\nMin-Priority Queue\n";

    // min-priority queue
    std::priority_queue<int, std::vector<int>, std::greater<int>> min_pq;
    min_pq.push(10);
    min_pq.push(20);
    min_pq.push(30);
    min_pq.push(5);

    // top() returns reference to highest priority element - smallest element
    std::cout << "Highest priority element in min-priority queue: " << min_pq.top() << "\n";
    std::cout << "Popping " << min_pq.top() << "\n";
    min_pq.pop();
    std::cout << "Highest priority element in min-priority queue: " << min_pq.top() << "\n";
}