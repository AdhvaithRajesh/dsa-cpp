#include <iostream>
#include <cmath>

int main()
{
    int n, n_copy, digits, sum = 0;
    std::cout << "Enter number to check if Armstrong: ";
    std::cin >> n;
    n_copy = n;

    digits = log10(n) + 1;

    while (n > 0)
    {
        sum += int(pow(n % 10, digits));
        n = n / 10;
    }

    if (sum == n_copy)
    {
        std::cout << n_copy << " is an Armstrong number.\n";
    }
    else
    {
        std::cout << n_copy << " is not an Armstrong number.\n";
    }

    return 0;
}