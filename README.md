# Advanced Sorting

Small C++ exercises on sorting and hashing, written as data-structures and algorithms coursework.

## Contents

| File | What it implements |
| --- | --- |
| `sorting_algos.cpp` | Shell sort (gap halving) and quicksort (Lomuto partition, last element as pivot). Functions only, no `main`. |
| `hashTable_implementation.cpp` | A hash table of integers using separate chaining (`std::vector` of `std::list`, `key % bucketSize`), with insert, search and display, plus a demo `main`. |
| `hashing_unordered_map.cpp` | A minimal `std::unordered_map<int, std::string>` example that inserts and prints key/value pairs. |

## Built with

- C++ and the standard library (`<vector>`, `<list>`, `<unordered_map>`)

## Run it

```sh
g++ hashTable_implementation.cpp -o hash && ./hash
g++ hashing_unordered_map.cpp && ./a.out
```

`sorting_algos.cpp` has no `main`, so add one (or include the functions from another file) before compiling it as a program.
