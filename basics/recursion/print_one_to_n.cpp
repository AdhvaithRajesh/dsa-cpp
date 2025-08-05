#include <iostream>

void print_one_to_n(int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        print_one_to_n(n - 1);
        std::cout << n << "\n";
    }
}

int main()
{
    std::cout << "How many times? ";
    int n;
    std::cin >> n;
    print_one_to_n(n);
}