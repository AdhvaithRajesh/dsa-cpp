#include <iostream>

void print_n_to_one(int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        std::cout << n << "\n";
        print_n_to_one(n - 1);
    }
}

int main()
{
    std::cout << "How many times? ";
    int n;
    std::cin >> n;
    print_n_to_one(n);
}