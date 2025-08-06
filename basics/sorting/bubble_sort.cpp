#include <iostream>
#include <vector>
#include <utility>

template <typename T>
void print_vector(const std::vector<T> &da_vecta)
{
    for (const auto &element : da_vecta)
    {
        std::cout << element << " ";
    }
    std::cout << "\n";
}

void bubble_sort(std::vector<int> &da_vecta)
{
    int n = da_vecta.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (da_vecta[j] > da_vecta[j + 1])
            {
                std::swap(da_vecta[j], da_vecta[j + 1]);
            }
        }
    }
}

int main()
{
    std::vector<int> nums = {12, 19, 19, 5, 4, 99, 8};
    std::cout << "Vector: ";
    print_vector(nums);
    std::cout << "Sorted vector: ";
    bubble_sort(nums);
    print_vector(nums);
}