#include <iostream>
#include <vector>
#include <string>

template <typename T>
void print_vector(const std::vector<T> &vec)
{
    for (const auto &element : vec)
    {
        std::cout << element << " ";
    }
    std::cout << "\n";
}

std::string isArraySorted(std::vector<int> &da_vec)
{
    int len = da_vec.size();
    for (int i = 0; i < len - 1; i++)
    {
        if (da_vec[i] > da_vec[i + 1])
        {
            return "false";
        }
    }
    return "true";
}

int main()
{
    std::vector<int> nums = {12, 12, 12, 12, 12, 13};
    std::cout << "Vector: ";
    print_vector(nums);
    std::cout << "the array is sorted: ";
    std::cout << isArraySorted(nums) << "\n";
}