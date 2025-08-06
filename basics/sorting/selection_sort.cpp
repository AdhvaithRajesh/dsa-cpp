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

void selection_sort(std::vector<int> &da_vecta)
{
    int n = da_vecta.size();
    for (int i = 0; i < n - 1; ++i)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (da_vecta[j] < da_vecta[minIndex])
            {
                minIndex = j;
            }
        }
        if (minIndex != i)
        {
            std::swap(da_vecta[i], da_vecta[minIndex]);
        }
    }
}

int main()
{
    std::vector<int> nums = {12, 19, 19, 5, 4, 99, 8};
    std::cout << "Vector: ";
    print_vector(nums);
    std::cout << "Sorted vector: ";
    selection_sort(nums);
    print_vector(nums);
}