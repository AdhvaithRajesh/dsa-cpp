#include <iostream>

int main()
{
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < i + 1; j++)
        {
            std::cout << j;
        }
        for (int k = 1; k <= (5 - 1) * 2 - 2 * i; k++) // 5(upper limit of i where i goes from 1 to n) can be substituted by n
        {
            std::cout << " ";
        }
        for (int l = i; l > 0; l--)
        {
            std::cout << l;
        }
        std::cout << "\n";
    }
    return 0;
}