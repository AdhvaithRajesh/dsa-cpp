#include <iostream>

int main()
{
    int a = 1;
    for (int i = 1; i < 6; i++)
    {
        for (int j = 0; j < i; j++, a++)
        {
            std::cout << a << " ";
        }
        std::cout << "\n";
    }
    return 0;
}