#include <iostream>
#include <queue>
#include <string>

/*
for problems that require FIFO (First In First Out) processing
container adapter that models a real-world waiting line
    - container adapter - isn't a full container; wrapper around std::deque to provide a restricted interface
restricted access - can only interact with elements at the front and the back of the queue
all operations are O(1)

When to use queue?
- Breadth-first search (BFS)
    - used to explore graph or tree layer by layer
    - used to finding shortest path in unweighted graph
    - manages nodes to visit next - ensuring all nodes at a specific depth are processed before moving to next level
- Level Order Traversal
    - BFS applied to a tree
    - root, its children, then their children, and so on
- Simulations wherever a waiting line is involved
*/

template <typename T>
void print_queue(std::queue<T> kyoo)
{
    while (kyoo.empty() != true)
    {
        std::cout << kyoo.front() << " ";
        kyoo.pop();
    }
    std::cout << "\n";
}

int main()
{
    std::queue<std::string> q;

    // add elements to the back of the queue
    q.push("Alice");
    q.push("Barley");
    q.push("Cork");

    // to get and remove first element - two steps are required
    std::string next_in_line = q.front(); // gets Alice
    std::cout << "Front of the queue: " << next_in_line << "\n";

    q.pop(); // removes Alice - IMPORTANT - DOES NOT RETURN Alice

    // last element
    std::string last_in_line = q.back();
    std::cout << "Back of the queue: " << last_in_line << "\n";

    // size of queue
    std::cout << "Size of the queue: " << q.size() << "\n";

    // std::queue doesn't provide .begin(), .end() iterators
    // there is no non-destructive way to iterate through a queue - must keep printing .front() and popping
    // other solution is to create a copy of the queue and print it
    print_queue(q);
}