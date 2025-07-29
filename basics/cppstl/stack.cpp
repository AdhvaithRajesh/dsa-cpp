#include <iostream>
#include <stack>
#include <string>

/*
for LIFO(Last-In-First-Out) processing
simulates a real-world stack - like a stack of plates - the one most recently placed on top is the first to be removed

it is a container adapter - it isn't a full container, wrapper around std::deque to provide a restricted interface

restricted access - can only access the element at the top of the stack

all operations are O(1)

When to use stack?
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
void print_stack(std::stack<T> da_stack)
{
    while (!da_stack.empty())
    {
        std::cout << da_stack.top() << " ";
        da_stack.pop();
    }
    std::cout << "\n";
}

int main()
{
    // core operations
    // push(value) - add element to the top of the stack
    // pop() - remove element from the top of the stack. IMPORTANT - does not return the element
    // top() - returns reference to the element at the top of the stack
    // size() - returns number of elements in the stack
    // empty() - returns true if stack is empty

    std::stack<std::string> stk;

    // pushing values to the top of the stack
    stk.push("1");
    stk.push("2");
    stk.push("three");
    stk.push("four");

    print_stack(stk);

    // removing values from the stack
    std::cout << stk.top() << "\n";
    stk.pop();

    print_stack(stk);

    std::cout << "The size of the stack is: " << stk.size() << "\n";
}