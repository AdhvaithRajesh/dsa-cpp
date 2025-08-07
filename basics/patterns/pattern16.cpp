#include <iostream>

int main()
{
    char a = 'A';
    for (int i = 1; i < 6; i++, a++)
    {
        for (int j = 0; j < i; j++)
        {
            std::cout << a << " ";
        }
        std::cout << "\n";
    }
    return 0;
}