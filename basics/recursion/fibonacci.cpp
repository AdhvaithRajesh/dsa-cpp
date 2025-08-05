#include <iostream>

int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}

int main()
{
    std::cout << "five bone, I see? Enter: ";
    int n;
    std::cin >> n;

    std::cout << "Aha! " << fib(n) << "!!\n";
}