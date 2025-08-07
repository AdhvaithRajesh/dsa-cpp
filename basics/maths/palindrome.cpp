#include <iostream>

int main()
{
    int n, n_copy, rev = 0;
    std::cout << "Enter a number to check if it's a palindrome: ";
    std::cin >> n;
    n_copy = n;

    while (n > 0)
    {
        rev = rev * 10 + (n % 10);
        n = n / 10;
    }

    if (rev == n_copy)
    {
        std::cout << n_copy << " is a palindrome.\n";
    }
    else
    {
        std::cout << n_copy << " is not a palindrome.\n";
    }
    return 0;
}