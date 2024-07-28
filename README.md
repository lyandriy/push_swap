# push_swap

## Project Description

The `push_swap` project is part of the School 42 curriculum, designed to enhance your understanding of sorting algorithms and stack data structures. The goal of this project is to sort a list of integers using a set of predefined operations on two stacks, with the objective of doing so using the fewest possible moves.

## What It Does

The `push_swap` program takes a list of integers as input and sorts them using a series of operations on two stacks, `A` and `B`. The program outputs the sequence of operations needed to sort the list.

## Implementation Details

- **Language**: The project is implemented in C.
- **Data Structures**:
  - **Stack A**: Initially holds the input integers.
  - **Stack B**: Used as a temporary stack for sorting operations.
- **Operations**:
  - **sa**: Swap the first two elements at the top of stack `A`.
  - **sb**: Swap the first two elements at the top of stack `B`.
  - **ss**: `sa` and `sb` at the same time.
  - **pa**: Push the top element from stack `B` to stack `A`.
  - **pb**: Push the top element from stack `A` to stack `B`.
  - **ra**: Rotate all elements of stack `A` up by one.
  - **rb**: Rotate all elements of stack `B` up by one.
  - **rr**: `ra` and `rb` at the same time.
  - **rra**: Reverse rotate all elements of stack `A` down by one.
  - **rrb**: Reverse rotate all elements of stack `B` down by one.
  - **rrr**: `rra` and `rrb` at the same time.
- **Headers**:
  - `#include <stdlib.h>`: For memory management.
  - `#include <unistd.h>`: For standard input/output.
  - `#include <stdio.h>`: For debugging and auxiliary output.
  - `#include <limits.h>`: For integer limit constants.

### How It Works

1. **Parsing Input**:
   - Reads the list of integers from command line arguments.
   - Validates input to ensure all elements are integers and within the allowed range.
   - Initializes stack `A` with the input integers.

2. **Sorting Algorithm**:
   - Implements a series of sorting algorithms optimized for fewest moves, such as:
     - Simple sorting for small sets of integers (e.g., up to 5 elements).
     - More complex algorithms like Quicksort or Radix sort for larger sets.
   - Determines the optimal sequence of operations to sort the list.

3. **Executing Operations**:
   - Executes the sequence of operations on stacks `A` and `B`.
   - Outputs each operation to standard output.

4. **Optimizing Moves**:
   - Applies techniques to minimize the number of moves.
   - Ensures the sequence is efficient and adheres to the project's constraints.

### Example Usage


To run the `push_swap` program, compile the project using the provided Makefile and then execute the program with a list of integers as arguments:

```sh
make
./push_swap 3 2 5 1 4
```

The program will output a sequence of operations, for example:
`pb` 
`pb` 
`sa` 
`ra` 
`pa` 
`pa`

This project provides a practical exercise in implementing and optimizing sorting algorithms, as well as managing and manipulating stack data structures.
