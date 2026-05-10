# C Fundamentals

A collection of C programs exploring systems programming concepts
from the ground up — memory, pointers, algorithms, and more.

## What I explored

- **Standard library implementations** — custom implementations of
  `strlen`, `memcpy` to understand how they work under the hood
- **Generics in C** — using `void *` and function pointers to write
  type-agnostic functions, similar to how `qsort` works
- **Pointer arithmetic** — direct memory manipulation
- **Sorting algorithms** — bubble sort, insertion sort, binary search
- **File programming** — reading and writing files in C
- **Command line tools** — building CLI programs
- **Network programming** — HTTP server, multithreaded server

## What I learned

C has no strings, no generics, no automatic memory management.
Everything is explicit. That forced me to deeply understand how
memory, types, and abstractions actually work — knowledge that
carries into every other language.

## Structure

| Directory | Contents |
|---|---|
| `standard_library_implementations/` | Custom strlen, memcpy |
| `generics/` | Generic sort using void pointers and function pointers |
| `sorting/` | Bubble sort, insertion sort, binary search |
| `commandline_tools/` | CLI programs |
| `file_programming/` | File I/O |
| `network_programming/` | HTTP server |
| `pointer_arithmetic/` | Direct memory manipulation |

## Here is my todo list.
- Virtual file system
- Multi threaded HTTP server
- Write a markdown parser
- Fractal generator
- Terminal graphics renderer
