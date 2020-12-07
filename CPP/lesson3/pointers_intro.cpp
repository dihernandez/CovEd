#include <iostream>

using namespace std;

const int ARR_SIZE = 4;

int main() {
    // remember arrays?
    // they are just a memory location 
    // an int array is 8 bits * ARRAY_SIZE
    // we can declare a datatype and use a pointer to refer to the beginning of the memory block
    int some_number{8};
    cout << "some_number has value " << some_number << endl;
    
    int *some_number_pointer{&some_number}; // the * indicates that it is a datatype pointer, the &means get the address of the variable

    cout << "some number address has value " << some_number_pointer << endl;

    cout << "some number dereferenced  has value " << *(some_number_pointer) << endl; // the dereference operator *() syntax says get the value at memory location pointed to by the pointer

    const char *array_of_strings1[3] {"this ", "is ", "a "};

    const char *array_of_strings2[ARR_SIZE] {"this ", "is ", "a ", "2"};
    const char *array_of_strings_uninitialized[ARR_SIZE];
    int *array_of_ints_uninitialized[ARR_SIZE];
    for (int i = 0; i < ARR_SIZE; i++) {
         // what happens if array_of_strings is smaller than ARR_SIZE?
        // cout << " word is " << *(array_of_strings1 + i) << endl;
            cout << " word is " << *(array_of_strings2 + i) << " at address " << (array_of_strings2 + i) << endl;
            cout << "this should print the addresses for the initialized address space " << array_of_strings_uninitialized + i<< endl;
            //cout << " I is at segfault " << i << endl;
            //cout << "this shouldn't work" << array_of_strings_uninitialized[i] << endl;
           // cout << "this should cause a runtime error " << *(array_of_strings_uninitialized + i) << endl; // segfault is an illegal memory access,
            // this happens because we are trying to dereference a const * (constant pointer) to a garbage value- could segfault because this value could point to invalid or unmapped memory
            // could shoot yourself in the foot here, say for example the garbage value is a valid pointer - unexpected behaviour 

            cout << " ints are " << (long long)(*(array_of_ints_uninitialized + i)) << endl;
        }

    int array_of_ints_uninitialized1[ARR_SIZE];

    for(int i = 0; i < ARR_SIZE; i++) {
            array_of_ints_uninitialized1[i] = i*10;
    }

    for(int i = 0; i < ARR_SIZE; i++) {
            cout << " ints are " << *(array_of_ints_uninitialized1 + i) << endl;
    }

    return 0;
}
