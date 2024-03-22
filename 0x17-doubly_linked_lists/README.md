# Doubly Linked Lists in C

## Project Description
This project explores the implementation and manipulation of doubly linked lists in C programming. A doubly linked list is a type of data structure that consists of nodes where each node contains data and pointers to the next and previous nodes. This allows traversal of the list in both forward and backward directions. The project covers creating, inserting, deleting nodes, and performing operations like searching and summing values in the list.

## Learning Objectives
- Understand what a doubly linked list is and its advantages over singly linked lists.
- Learn how to implement insertion, deletion, and search operations on doubly linked lists.
- Practice memory management in C, especially with regards to dynamic memory allocation and deallocation.
- Develop algorithms for manipulating doubly linked lists, including reversing the list and finding its length.

## Environment
- **Language:** C
- **OS:** Compiled and tested on Ubuntu 20.04 LTS
- **Compiler:** gcc 9.3.0, using the options `-Wall -pedantic -Werror -Wextra -std=gnu89`
- **Style guidelines:** Betty style

## Files Description
Below is a brief description of key files in this project:

- `lists.h`: Header file containing the definitions and prototypes for all functions and the `dlistint_t` structure.
- `0-print_dlistint.c`: Function to print all the elements of a `dlistint_t` list.
- `1-dlistint_len.c`: Function that returns the number of elements in a `dlistint_t` list.
- `2-add_dnodeint.c`: Function that adds a new node at the beginning of a `dlistint_t` list.
- `3-add_dnodeint_end.c`: Function that adds a new node at the end of a `dlistint_t` list.
- `4-free_dlistint.c`: Function that frees a `dlistint_t` list.
- `5-get_dnodeint.c`: Function that returns the nth node of a `dlistint_t` list.
- `6-sum_dlistint.c`: Function that returns the sum of all the data of a `dlistint_t` list.
- `7-insert_dnodeint.c`, `2-add_dnodeint.c`, `3-add_dnodeint_end.c`: Functions for inserting a new node at a given position.
- `8-delete_dnodeint.c`: Function that deletes the node at index `index` of a `dlistint_t` linked list.

## Setup and Compilation
To compile all files in the project, use the following command:

```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 *.c -o [output_name]
```

Replace `[output_name]` with the desired name for your compiled output.

## Usage
To run the program, use the following command:

```sh
./[output_name]
```

Ensure you replace `[output_name]` with the name you chose when compiling your files.

## Additional Notes
- This project is part of the ALX Africa curriculum in computer science.
- The project's focus is educational, aimed at understanding and implementing doubly linked lists in C.
