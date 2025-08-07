#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
void print_vector(const std::vector<T> &vec)
{
    for (const auto &element : vec)
    {
        std::cout << element << " ";
    }
    std::cout << "\n";
}

template <typename T>
T findLargestElement(const std::vector<T> &vec)
{
    T largestElement = vec[0];
    for (const auto &element : vec)
    {
        if (element > largestElement)
        {
            largestElement = element;
        }
    }
    return largestElement;
}

int findLargestElement2(std::vector<int> &vec)
{
    std::sort(vec.begin(), vec.end());
    return vec[vec.size() - 1];
}

int main()
{
    std::vector<int> nums = {12, 19, 19, 5, 4, 99, 8};
    std::cout << "Vector: ";
    print_vector(nums);
    std::cout << "Largest Element: ";
    std::cout << findLargestElement(nums) << "\n";
    std::cout << findLargestElement2(nums) << "\n";
}