#include <iostream>

int main()
{
    for (int i = 1; i < 6; i++)
    {
        for (int j = 0; j < i; j++)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    }
    return 0;
}