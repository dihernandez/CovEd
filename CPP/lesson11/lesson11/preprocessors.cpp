// referenced https://www.geeksforgeeks.org/cc-preprocessors/

// Preprocessors - programs that process source code before compilation
// start with # symbol
/// 4 types

// 1 File Inclusion
// can be header or standard files like so
#include <iostream>
// or user defined files
// #include "namespaces.h"

// 2- Macros
// defined here
// compilor executes SIZE it replaces it with 3
#define SIZE 3

// macros can take arguments
#define ADD(a,b) (a + b)

// 3 - Conditonal Compilation - control which parts of a program to include or skip, such as:
#ifndef PREPROCESSORS
#define PREPROCESSORS
#endif // PREPROCESSORS
// these are particularly important to make sure you don't incldue the same file twice and create issues 
// with confusion over what variable is assigned to what

// 4- other
// #undef SIZE
// #pragma special purpose used to toggle compiler features


int main() {

    int a = 5,b = 7, sum;
    sum = ADD(a,b);
    std::cout << "a + b is " << sum << std::endl;

    for(int i = 0; i < SIZE; ++i) {
        std::cout << i << std::endl;
    }


    return 0;
}