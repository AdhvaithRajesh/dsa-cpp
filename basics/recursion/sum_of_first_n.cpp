#include <iostream>

int sum_of_first_n(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + sum_of_first_n(n - 1);
    }
}

int main()
{
    std::cout << "How many times? ";
    int n;
    std::cin >> n;
    std::cout << sum_of_first_n(n);
}