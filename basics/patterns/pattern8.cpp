#include <iostream>

int main()
{
    for (int i = 4; i >= 0; i--)
    {
        for (int k = 0; k < (5 - i); k++)
        {
            std::cout << " ";
        }

        for (int j = 0; j < 2 * i + 1; j++)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    }
}