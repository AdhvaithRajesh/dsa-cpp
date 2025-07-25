#include <iostream>
#include <vector>
#include <string>

/*
std::vector - one of the most fundamental, widely used data types in C++
flexible, list-like container, it is a dynamic array

dynamic size, contiguous memory, fast index-based access, fast add/remove at the end O(1)

When are they used?
- storing inputs of unknown size / reading N integers
- used as a stack - back() method can be used to peek top element
- frequency arrays - ex. number of occurences of characters of english alphabet

vectors are heap allocated
arrays are stack allocated

vectors and arrays both have a high ease of use

vectors are the default choice for everything
arrays are a safe, modern replacement for C-style arrays
*/

template <typename T>
void print_vector(const std::vector<T> &da_vecta)
{
    for (const auto &element : da_vecta)
    {
        std::cout << element << " ";
    }
    std::cout << "\n\n";
}

int main()
{
    // empty vectors
    std::vector<int> numbers;
    std::vector<std::string> strings;

    std::cout << "numbers: ";
    print_vector(numbers);
    std::cout << "strings";
    print_vector(strings);

    // empty vector of size 5 - all elements initialized to 0
    std::vector<int> sized_vector(5);

    std::cout << "sized_vector: ";
    print_vector(sized_vector);

    // vector of size 5 - all elements initialized to 100
    std::vector<int> filled_vector(5, 100);

    std::cout << "filled vector: ";
    print_vector(filled_vector);

    // initializer list
    std::vector<int> initial_vector = {10, 20, 30, 40, 50};

    std::cout << "initial vector";
    print_vector(initial_vector);

    /*
    Core operations
    push_back() - add an element to the end of the vector
    size() - get the number of elements in the vector
    accessing elements - index-based or using at()
    pop_back() - removing last element
    empty() - true if vector is empty, false if not
    clear() - removes the elements in the vector
    iterating - ranged based for
    */

    std::cout << "\nOperations\n";
    std::vector<int> v;
    print_vector(v);

    // push_back / insert operation
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    print_vector(v);

    // size
    std::cout << "the size of this vector is " << v.size() << "\n";

    // accessing
    // index-based / subscript i.e. [index] is faster
    // .at(index) is slower because it does bounds-checking
    // speed of [] is preferred in competition
    std::cout << v[0] << "\n";
    std::cout << v.at(0) << "\n";

    // removing last element
    v.pop_back();
    std::cout << "popped\n";
    print_vector(v);

    // iteration done in print_vector()
    // use reference to modify
    std::cout << "before modification:\n";
    print_vector(v);

    for (auto &i : v)
    {
        i *= 2;
    }

    std::cout << "after modification:\n";
    print_vector(v);
}