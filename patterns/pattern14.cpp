#include <iostream>

int main()
{
    char a = 'A';
    for (int i = 1; i < 6; i++)
    {
        for (int j = 0; j < i; j++, a++)
        {
            std::cout << a << " ";
        }
        std::cout << "\n";
        a = 'A';
    }
    return 0;
}