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

void reverseVector(std::vector<int> &da_vec, int start, int end)
{
    while (start < end)
    {
        std::swap(da_vec[start], da_vec[end]);
        start++;
        end--;
    }
}

void rightRotate(std::vector<int> &da_vec, int d)
{
    int n = da_vec.size();
    d = d % n; // normalizing since n rotations result in the same array

    if (d == 0)
    {
        return;
    }

    std::reverse(da_vec.begin(), da_vec.end());       // reverse the vector
    std::reverse(da_vec.begin(), da_vec.begin() + d); // reverse the first d elements
    std::reverse(da_vec.begin() + d, da_vec.end());   // reverse n - d elements
}

void leftRotate(std::vector<int> &da_vec, int d)
{
    int n = da_vec.size();
    d = d % n; // normalize

    if (d == 0)
    {
        return;
    }

    reverseVector(da_vec, 0, d - 1);
    reverseVector(da_vec, d, n - 1);
    reverseVector(da_vec, 0, n - 1);
}

int main()
{
    std::vector<int> vec1 = {0, 0, 3, 3, 5, 6};
    std::vector<int> vec2 = {-2, 2, 4, 4, 4, 4, 5, 5};
    std::vector<int> vec3 = {0, 0, 3, 3, 5, 6};

    int d;
    std::cout << "Enter positions to shift to left by: ";
    std::cin >> d;

    std::cout << "original vectors: ";
    printVector(vec1);
    printVector(vec2);

    std::cout << "right rotated by " << d << ": ";
    rightRotate(vec1, d);
    printVector(vec1);

    std::rotate(vec2.begin(), vec2.begin() + d, vec2.end());
    printVector(vec2);

    std::cout << "left rotated by " << d << ": ";
    leftRotate(vec3, d);
    printVector(vec3);
}