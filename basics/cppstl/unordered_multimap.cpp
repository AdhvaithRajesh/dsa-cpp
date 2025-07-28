#include <iostream>
#include <unordered_map>
#include <string>

template <typename k_type, typename v_type>
void print_unordered_multimap(const std::unordered_multimap<k_type, v_type> &da_ummap)
{
    for (const auto [key, value] : da_ummap)
    {
        std::cout << key << ": " << value << "\n";
    }
}

int main()
{
    // declaration and initialization
    std::unordered_multimap<std::string, std::string> contacts = {
        {"Alice", "555-1234"},
        {"Blob", "555-2345"},
        {"Alice", "555-3456"}};

    print_unordered_multimap(contacts);
    std::cout << "Total entries: " << contacts.size() << "\n";

    /*
    Core operations
    - there is no [] operator - compiler will not know what to return since keys can have duplicates
    - insert({key, value}) - always creates a new key-value pair
    - count(key) - returns number of elements associated with a particular key

    - IMPORTANT - equal_range(key)
        returns a pair of iterators that marks the beginning and end of all entries of a specific key
        this can be looped through
    */

    contacts.insert({"Farley", "555-4567"});

    // erase(key) removes all entries of a particular key
    // erase(iterator) removes the particular key-value pair pointed to by that iterator

    auto range = contacts.equal_range("Alice");

    std::cout << "Alice's numbers: ";
    for (auto it = range.first; it != range.second; ++it)
    {
        std::cout << it->second << "\n";
    }
}