#include <iostream>

int main()
{
    char let1 = 'E';
    for (int i = 1; i < 6; i++)
    {
        char let2 = let1;
        for (int j = 0; j < i; j++, let2++)
        {
            std::cout << let2 << " ";
        }
        std::cout << "\n";
        let1--;
    }
    return 0;
}