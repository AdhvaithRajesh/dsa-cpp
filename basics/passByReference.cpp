#include <iostream>

void swap(int &, int &);

int main()
{
    int x, y;

    std::cout << "Enter values for x and y: ";
    std::cin >> x >> y;

    std::cout << "Before swapping\n";
    std::cout << "x: " << x << " y: " << y << "\n";

    swap(x, y);

    std::cout << "After swapping\n";
    std::cout << "x: " << x << " y: " << y << "\n";
}

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}