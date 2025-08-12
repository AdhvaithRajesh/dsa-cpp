#include <iostream>
#include <vector>
#include <algorithm>

void printVector(const std::vector<int> &da_vec)
{
    for (const auto &element : da_vec)
    {
        std::cout << element << " ";
    }
    std::cout << "\n";
}

void leftRotate(std::vector<int> &da_vec)
{
    int temp = da_vec[0];
    int n = da_vec.size();
    for (int i = 1; i < n - 1; i++)
    {
        da_vec[i] = da_vec[i + 1];
    }
    da_vec[n - 1] = temp;
}

int main()
{
    std::vector<int> vec1 = {0, 0, 3, 3, 5, 6};
    std::vector<int> vec2 = {-2, 2, 4, 4, 4, 4, 5, 5};
    std::cout << "original vectorS: ";
    printVector(vec1);
    printVector(vec2);
    std::cout << "left rotated by one: ";
    leftRotate(vec1);
    printVector(vec1);
    std::rotate(vec2.begin(), vec2.begin() + 1, vec2.end());
    printVector(vec2);
}