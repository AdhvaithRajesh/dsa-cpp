#include <iostream>

int main()
{
    char a = 'A';
    for (int i = 5; i > 0; i--)
    {
        for (int j = 0; j < i; j++, a++)
        {
            std::cout << a << " ";
        }
        std::cout << "\n";
        a = 'A';
    }
}