#include <iostream>

/*
- function calls itself to solve a problem
- breaking down problems into smaller, self-similar problems

components
- base case
    - condition that stops the recursion, simplest possible version of the problem
    - function can solve without another recursive call
- recursive case
    - function calls itself with a modified input
    - brings itself closer to the recursive case

How does recursion work?
- Every time a function is called, the computer pushes a frame containing function's local variables and state onto memory
    - this part of the memory is called the call stack
    - when a function returns, it is popped out of the call stack
    - recursion uses this stack to keep track of chain of calls
    - if base case is never reached, stack keeps growing till it runs out of memory
        - stack overflow

When to use?
- Tree and Graph Traversals (DFS)
- Divide and Conquer problems (Merge sort, quick sort)
- Problems involving permutations and combinations
- mathematical sequences like factorial, fibonacci
*/

void print_hello(int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        std::cout << "Hello, World!\n";
        print_hello(n - 1);
    }
}

int main()
{
    int n;
    std::cout << "How many times? ";
    std::cin >> n;
    print_hello(n);
}