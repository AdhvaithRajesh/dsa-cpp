#include <iostream>

int main()
{
    char let1 = 'A'; // this is incremented by one every outer loop
    for (int i = 0; i < 4; i++, let1++)
    {
        for (int k = 0; k < (5 - i); k++) // loop for spaces
        {
            std::cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            char let2 = let1;                            // for printing per row
            std::cout << char(let2 - abs(i - j)) << " "; // subtracts from outer loop letter the mod of the difference
            let2++;
        }
        std::cout << "\n";
    }
    return 0;
}