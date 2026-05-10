# C Fundamentals

A hands-on exploration of C from the ground up — memory, pointers,
data structures, algorithms, and systems programming.

The goal is not just to write programs but to understand what happens
at the machine level. Every program here is written with that intent.

---

## Standard Library Implementations

Reimplementing standard library functions from scratch to understand
what the abstractions are hiding.

- `strlen` — counts bytes in a string by walking memory until `\0`
- `memcpy` — copies n bytes from source to destination using void pointers
- `memmove` — like memcpy but handles overlapping memory regions (todo)
- `strcpy` — copies a string including the null terminator (todo)
- `strcat` — concatenates two strings (todo)
- `malloc` — simple memory allocator (todo)

---

## Data Structures

Implementing fundamental data structures using raw memory and pointers.

- `linked_list` — singly linked list with insert, delete, search (todo)
- `stack` — stack implementation using linked list (todo)
- `hash_map` — hash map with collision handling (todo)
- `dynamic_array` — a vector-like growable array using realloc (todo)

---

## Algorithms

- `bubble_sort` — simple comparison sort
- `insertion_sort` — efficient for small or nearly sorted data
- `binary_search` — O(log n) search on sorted arrays
- `merge_sort` — divide and conquer sorting (todo)
- `generic_sort` — sorting any data type using void pointers and
  function pointers, the same approach used by qsort

---

## Systems Programming

Programs that interact directly with the operating system.

### File I/O
- Reading and writing files
- Parsing structured data from files

### Network Programming
- HTTP server — serves static files over TCP
- Multithreaded HTTP server — handles concurrent connections (todo)

### Command Line Tools
- Tools that read from stdin, process data, write to stdout
- Argument parsing with argc and argv

---

## Memory and Pointers

Programs that demonstrate deep pointer understanding.

- Pointer arithmetic — walking arrays and strings with pointer math
- Struct memory layout — padding, alignment, offsetof
- void pointers — writing generic functions that work on any type
- Function pointers — passing behavior as data

---

## What I Learned

C forces you to think about things most languages hide:

- There are no strings — just pointers to bytes ending in `\0`
- There are no generics — you use void pointers and function pointers
- There is no automatic memory — you allocate and free manually
- Every abstraction has a cost you can measure and understand

This understanding carries into every other language and makes you
a better programmer regardless of what you write in.

---

## Build

Each program is self contained and compiles with:

```bash
gcc -Wall -Wextra -o output filename.c
```

## Directory Structure

```
c-fundamentals/
├── standard_library_implementations/
│   ├── strlen.c
│   ├── memcpy.c
│   ├── memmove.c
│   └── strcpy.c
├── data_structures/
│   ├── linked_list.c
│   ├── stack.c
│   ├── hash_map.c
│   └── dynamic_array.c
├── algorithms/
│   ├── bubble_sort.c
│   ├── insertion_sort.c
│   ├── merge_sort.c
│   ├── binary_search.c
│   └── generic_sort.c
├── systems/
│   ├── file_programming/
│   ├── network_programming/
│   └── commandline_tools/
└── memory_and_pointers/
    ├── pointer_arithmetic.c
    ├── struct_memory_layout.c
    └── generic_functions.c
```
