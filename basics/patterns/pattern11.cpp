#include <iostream>

int main()
{
    for (int i = 1; i < 6; i++)
    {
        for (int j = 0; j < i; j++)
        {
            std::cout << (i + j) % 2;
        }
        std::cout << "\n";
    }
}