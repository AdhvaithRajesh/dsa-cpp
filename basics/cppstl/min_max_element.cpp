#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
void print_vector(const std::vector<T> da_vecta)
{
    for (const auto &element : da_vecta)
    {
        std::cout << element << " ";
    }
    std::cout << "\n";
}

template <typename t1, typename t2>
void print_pair_vector(const std::vector<std::pair<t1, t2>> &da_pair_vecta)
{
    for (const auto &element : da_pair_vecta)
    {
        std::cout << "{" << element.first << " , " << element.second << "}"
                  << " ";
    }
    std::cout << "\n";
}

int main()
{
    std::vector<int> da_vecta = {14, 20, 3, 19, 99, 4};
    std::cout << "da_vecta: ";
    print_vector(da_vecta);

    // iterator that points to min and max element
    auto min_it = std::min_element(da_vecta.begin(), da_vecta.end());
    auto max_it = std::max_element(da_vecta.begin(), da_vecta.end());

    // now we can dereference these iterators to get the values
    int min = *min_it;
    int max = *max_it;

    std::cout << "min: " << min << "\n";
    std::cout << "max: " << max << "\n";

    // to get the indices of the elements
    int min_index = std::distance(da_vecta.begin(), da_vecta.end());
    int max_index = std::distance(da_vecta.begin(), da_vecta.end());

    std::cout << "min index: " << min_index << "\n";
    std::cout << "max index: " << max_index << "\n";

    // can use lambda functions
    std::vector<std::pair<int, int>> pairs = {{1, 10}, {2, 30}, {3, 60}, {4, 100}};
    std::cout << "lambda function in a vector of pairs\n";
    print_pair_vector(pairs);

    // find the pair with the smallest second element
    auto it = std::min_element(pairs.begin(), pairs.end(), [](const auto &a, const auto &b)
                               { return a.second < b.second; });

    std::cout << "pair with smallest second element: {" << it->first << "," << it->second << "}\n";
}