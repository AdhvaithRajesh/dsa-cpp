/*
hashing - process of converting an any input into a fixed length string called a hash or a hash code

key components
1. hash function
- deterministic - the same input key must produce the same output hash code every time
- uniform distribution - must spread out different keys as evenly as possible across the range of hash codes

2. hash table
- data structure that uses hashing, like an array where each slot is called a bucket
- to store a key value pair
    - take the key ex. a string "apple"
    - pass it through a hash function to get a hash code ex. 5452
    - map hash code to an index in the array
        - a common way is using modulo operator - index = hash code % array_size
    - store value at computed index

challenge
- collisions
    - when different keys produce the same hash value
    - map to the same bucket in the hash table
    - methods to handle it
        - separate chaining
            - instead of storing one value in each bucket
            - each bucket stores a pointer to a linked list or another container

hashing in C++ STL
- std::unordered_map, std::unordered_set uses hashing

best case - O(1)
worst case - O(N) - all inputs collide into the same bucket - becomes a giant linked list

*/