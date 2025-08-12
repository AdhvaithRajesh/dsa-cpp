#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

void printVector(const std::vector<int> &da_vec)
{
    for (const auto &element : da_vec)
    {
        std::cout << element << " ";
    }
    std::cout << "\n";
}

std::vector<int> removeDups(std::vector<int> &da_vec)
{
    std::set<int> da_set;
    for (const auto &element : da_vec)
    {
        da_set.insert(element);
    }
    std::copy(da_set.begin(), da_set.end(), da_vec.begin());
    return da_vec;
}

void removeDupsOptimal(std::vector<int> &da_vec) // two pointer approach
{
    int write = 1; // starts at 1 because first element is always kept

    for (int read = 1; read < da_vec.size(); read++) // starts at first index, looks for next unique element
    {
        if (da_vec[read] != da_vec[write - 1]) // if there is a unique element
        {
            da_vec[write] = da_vec[read]; // copies it to the write pointer
            write++;                      // advances the write pointer
        }
    }
}

int main()
{
    std::vector<int> vec1 = {0, 0, 3, 3, 5, 6};
    std::vector<int> vec2 = {-2, 2, 4, 4, 4, 4, 5, 5};
    std::vector<int> vec3 = {-30, -30, 0, 0, 10, 20, 30, 30};
    std::vector<int> res1 = removeDups(vec1);
    std::vector<int> res2 = removeDups(vec2);
    std::vector<int> res3 = removeDups(vec3);
    printVector(res1);
    printVector(res2);
    printVector(res3);

    std::cout << "Optimal:\n";
    removeDupsOptimal(vec1);
    removeDupsOptimal(vec2);
    removeDupsOptimal(vec3);
    printVector(vec1);
    printVector(vec2);
    printVector(vec3);
}