#include <iostream>
#include <unordered_map>
#include <vector>

template <typename T>
void print_vector(const std::vector<T> &da_vecta)
{
    for (const auto &element : da_vecta)
    {
        std::cout << element << " ";
    }
    std::cout << "\n";
}

template <typename keyT, typename valueT>
void print_map(const std::unordered_map<keyT, valueT> &da_map)
{
    for (const auto &[key, value] : da_map)
    {
        std::cout << key << ": " << value << "\n";
    }
}

int main()
{
    std::vector<int> nums = {1, 2, 3, 4, 4, 3, 3, 3, 19, 12, 21, 29, 99, 50};

    std::cout << "vector: ";
    print_vector(nums);

    std::unordered_map<int, int> frequency;

    for (const auto &element : nums)
    {
        if (frequency.count(element))
        {
            frequency[element] += 1;
        }
        else
        {
            frequency[element] = 1;
        }
    }

    std::cout << "frequency map:\n";
    print_map(frequency);
}