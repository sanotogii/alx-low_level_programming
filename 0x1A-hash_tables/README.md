# Resources - Hash Tables

This repository contains the code and documentation for the Hash Tables project in C, as part of the ALX School Low-Level Programming curriculum.

## Table of Contents

- [General Information](#general-information)
- [Learning Objectives](#learning-objectives)
- [Requirements](#requirements)
- [Tasks](#tasks)
  - [Task 0: Creating a Hash Table](#task-0-creating-a-hash-table)
  - [Task 1: Implementing djb2 Hash Function](#task-1-implementing-djb2-hash-function)
  - [Task 2: Finding the Index of a Key](#task-2-finding-the-index-of-a-key)
  - [Task 3: Adding an Element to the Hash Table](#task-3-adding-an-element-to-the-hash-table)
  - [Task 4: Retrieving a Value by Key](#task-4-retrieving-a-value-by-key)
  - [Task 5: Printing the Hash Table](#task-5-printing-the-hash-table)
  - [Task 6: Deleting the Hash Table](#task-6-deleting-the-hash-table)
- [Advanced Task](#advanced-task)

## General Information

This project focuses on implementing and working with hash tables in C. Hash tables are a fundamental data structure used for efficient key-value storage and retrieval.

## Learning Objectives

By the end of this project, you are expected to be able to explain the following concepts to anyone:

- What is a hash function and what makes a good hash function.
- What is a hash table, how it works, and how to use it.
- Dealing with collisions in hash tables.
- Advantages and drawbacks of using hash tables.
- Common use cases of hash tables.

## Requirements

### General

- Editors allowed: vi, vim, emacs.
- All code files should be compiled on Ubuntu 20.04 LTS using `gcc` with the following options: `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- All code files should end with a new line.
- A `README.md` file at the root of the project directory is mandatory.
- Code should follow the Betty coding style.
- No global variables allowed.
- Each code file should contain no more than 5 functions.
- C standard library functions are allowed.
- Prototypes of all functions should be included in the `hash_tables.h` header file.
- Don't forget to push your header file.
- All header files should have include guards.

## Tasks

### Task 0: Creating a Hash Table

**Prototype:** `hash_table_t *hash_table_create(unsigned long int size);`

This function creates a hash table with a specified size and returns a pointer to it. If an error occurs, it should return `NULL`.

### Task 1: Implementing djb2 Hash Function

**Prototype:** `unsigned long int hash_djb2(const unsigned char *str);`

This function implements the djb2 hash algorithm to compute the hash value of a given string.

### Task 2: Finding the Index of a Key

**Prototype:** `unsigned long int key_index(const unsigned char *key, unsigned long int size);`

Given a key and the size of the hash table, this function returns the index at which the key-value pair should be stored.

### Task 3: Adding an Element to the Hash Table

**Prototype:** `int hash_table_set(hash_table_t *ht, const char *key, const char *value);`

This function adds or updates a key-value pair in the hash table. If successful, it returns `1`; otherwise, it returns `0`. In case of a collision, the new node should be added at the beginning of the list.

### Task 4: Retrieving a Value by Key

**Prototype:** `char *hash_table_get(const hash_table_t *ht, const char *key);`

This function retrieves the value associated with a key in the hash table. If the key cannot be found, it returns `NULL`.

### Task 5: Printing the Hash Table

**Prototype:** `void hash_table_print(const hash_table_t *ht);`

This function prints the key-value pairs in the hash table in the order they appear in the array of the hash table. If `ht` is `NULL`, it does not print anything.

### Task 6: Deleting the Hash Table

**Prototype:** `void hash_table_delete(hash_table_t *ht);`

This function deletes the entire hash table, including all key-value pairs and nodes.

## Advanced Task

### Task 7: Ordered Hash Table

This task involves creating an ordered hash table where key-value pairs are sorted by key (ASCII value) in ascending order. It uses a different data structure that includes a doubly-linked sorted list in addition to the hash table.

Refer to the provided data structures and rewrite the functions accordingly.
