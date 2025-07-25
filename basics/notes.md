## `for(auto element : set)`

- What it does - In this loop, for each element in my_set, a copy is made and stored in the variable element.
- When to use - Rarely. Only if you specifically need a mutable copy inside the loop.

### Pros

- Simple to write.
- The element variable inside the loop is a brand new, independent copy. You can modify it without any effect on the original set.

### Cons

- Performance Cost: Copying can be expensive! For simple types like int or char, the cost is negligible. But imagine your set holds large std::string objects or complex custom class objects. Making a copy of every single one just to read it is wasteful and can slow down your code significantly, especially on large datasets.

## `for(const auto& element : set)`

- What it does - References each element, new object not created
  - `&` creates a reference so no new copy is created
  - `const` ensures element won't be changed through the reference
- When to use - Almost always. This should be your default for read-only iteration.
