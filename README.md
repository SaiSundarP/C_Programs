# C Programs Collection

A structured repository containing various C programs, data structures, algorithms, and custom utility libraries. 

## 📁 Repository Structure

The project is divided into two main directories to separate the executable source code from custom library headers:

*   **`src/`**: Contains the main C source files covering core concepts like arrays, linked lists, pointers, and string manipulation.
*   **`my_lib/`**: Contains custom header files designed for specific algorithmic operations, hashing, and complexity tracking.

## 📄 File Index

### Source Files (`src/`)
*   `arrayOperations.c` - Implementations of various array manipulation techniques.
*   `calculator.c` - Basic arithmetic calculator logic.
*   `pointers.c` - Demonstrations of pointer arithmetic and memory addressing.
*   `reverseVowels.c` - String manipulation to reverse only the vowels in a given string.
*   `secondLargest.c` - Algorithm to find the second largest element in a data set.
*   `singly linked list.c` - Implementation of a singly linked list data structure and its operations.
*   `structure.c` - Examples of defining and using C structures.

### Library Files (`my_lib/`)
*   `complexity.h` - Utility for tracking or calculating time/space complexity.
*   `removeDuplicatesHash.h` - Hash-based implementation for efficiently removing duplicates.
*   `swapWithoutTemp.h` - Logic for swapping variables without using a temporary third variable.

## 🛠️ How to Compile and Run

To compile and run any of the programs locally, you can use a standard C compiler like GCC. Ensure that you link the header files appropriately if a source file relies on them.

1. Navigate to the root of the repository:
   ```bash
   cd C_Programs

2. Compile the code using gcc
    ```bash
    gcc src/filename.c -o filename -I my_lib
    
3. Run the file
    ```bash
    ./filename