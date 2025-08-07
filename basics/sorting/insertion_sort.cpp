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

void insertion_sort(std::vector<int> &da_vecta)
{
    int n = da_vecta.size();
    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (j > 0 && da_vecta[j - 1] > da_vecta[j])
        {
            std::swap(da_vecta[j], da_vecta[j - 1]);
            j--;
        }
    }
}

int main()
{
    std::vector<int> nums = {12, 19, 19, 5, 4, 99, 8};
    std::cout << "Vector: ";
    print_vector(nums);
    std::cout << "Sorted vector: ";
    insertion_sort(nums);
    print_vector(nums);
}