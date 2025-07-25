#include <iostream>
#include <cmath>

int main()
{
    int n, digit_count = 0;

    std::cout << "Enter a number: ";
    std::cin >> n;

    // while (n > 0)
    // {
    //     digit_count++;
    //     n = n / 10;
    // }

    digit_count = log10(n) + 1;

    std::cout
        << "The number of digits in the number is " << digit_count;

    return 0;
}