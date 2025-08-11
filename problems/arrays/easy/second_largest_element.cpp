#include <iostream>
#include <vector>
#include <limits>

template <typename T>
void print_vector(const std::vector<T> &vec)
{
    for (const auto &element : vec)
    {
        std::cout << element << " ";
    }
    std::cout << "\n";
}

int secondLargestElement(std::vector<int> &da_vec)
{
    int second_largest_element = std::numeric_limits<int>::min();
    int largest_element = std::numeric_limits<int>::min();

    for (const auto &element : da_vec)
    {
        if (element > largest_element)
        {
            second_largest_element = largest_element;
            largest_element = element;
        }
        else if (element > second_largest_element && element != largest_element)
        {
            second_largest_element = element;
        }
    }
    if (second_largest_element == std::numeric_limits<int>::min())
    {
        return -1;
    }
    return second_largest_element;
}

int main()
{
    std::vector<int> nums = {12, 12, 12, 12};
    std::cout << "Vector: ";
    print_vector(nums);
    std::cout << "Second largest Element: ";
    std::cout << secondLargestElement(nums) << "\n";
}
