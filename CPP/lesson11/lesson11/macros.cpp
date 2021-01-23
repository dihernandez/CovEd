// referenced https://gcc.gnu.org/onlinedocs/cpp/Macros.html

#include <iostream>
#include <vector>

// Object-like Macros
// looks like data object
// #define body, expansion/replacement list

#define BUFFER_SIZE 1024 

int main(){
    int int_array[BUFFER_SIZE]; // Compiler sees int int_array[1024]

    // syntax: macros must be one line
    // #define ....... must end 
    // but one can use  \ to continue a line indefinitely
    #define VALUES 1, \ 
    2, \
    3
    int x[] = {VALUES};
    // macros are expanded in sequential order
    // they can be unrolled 

    for(auto v : x) {
        std::cout << v << std::endl;
    }

}