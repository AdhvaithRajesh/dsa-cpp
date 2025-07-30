#include <iostream>
#include <map>
#include <string>

/*
key-value store
keeps elements sorted by key and allows the existence of duplicate keys

properties
- elements are stored in key-value pairs
- duplicate keys are allowed
- sorted by key
- logarithmic time complexity - implemented as a balanced binary search tree

When to use multimap?
- ordered grouping/categorization
    - most common use case
    - ex. dictionary where words are sorted alphabetically, and each word can have multiple meanings
- event scheduling
    - storing events where key is a timestamp
    - allows multiple events at the same time, allows to be viewed in chronological order
    - directory-like structures
*/

template <typename key_type, typename value_type>
void print_multimap(const std::multimap<key_type, value_type> da_mmap)
{
    for (const auto &[key, value] : da_mmap)
    {
        std::cout << key << ": " << value << "\n";
    }
}

int main()
{
    std::multimap<std::string, int> expenditure;
    expenditure.insert({"Candy", 90});
    expenditure.insert({"Stickers", 100});
    expenditure.insert({"Stall", 40});
    expenditure.insert({"Candy", 50});

    print_multimap(expenditure);

    std::cout << "Expenditure on Candy:\n";
    auto range = expenditure.equal_range("Candy");
    for (auto it = range.first; it != range.second; it++)
    {
        std::cout << it->second << "\n";
    }

    return 0;
}