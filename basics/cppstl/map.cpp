#include <iostream>
#include <map>
#include <string>

/*
like unordered map, but key-value pairs are kept in a sorted order of their keys
logarithmic time complexity of O(log N)

when to use map?
- choose map over unordered map ONLY when you need the properties that come with sorting
- maintaining an ordered dictionary
    - when you need to frequently iterate through key-value pairs in a sorted fashion
- range-based queries
    - ex. from employee salaries, find all employees with ID between 5000 and 6000
- finding next or previous key
*/

template <typename T>
void print_map(const std::map<std::string, T> &da_map)
{
    for (const auto &[key, value] : da_map)
    {
        std::cout << key << ": " << value << "\n";
    }
}

int main()
{
    // declaration
    std::map<std::string, int> test_map;

    // initialization
    std::map<std::string, int> student_scores = {
        {"Charlie", 10},
        {"Barley", 20},
        {"iCarley", 30},
        {"Kullu Manali", 1},
        {"Finale", 5}};

    print_map(student_scores);

    /*
    core operations
    insert - O(log N) - map_name["new_key"]
    find(key)
    count(key)
    erase(key)
    IMPORTANT - lower_bound(key), upper_bound(key)
    */
}