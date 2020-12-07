#include <iostream>

using namespace std;

const int ARRAY_SIZE = 10;

void iterateOverArray(int int_array[]) {
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << "by indexing "<< int_array[i] << endl;
        cout << "by pointer "<< *(int_array + i) << endl;
    }
}

int main() {
    int int_array1[ARRAY_SIZE];
    int size = sizeof(int_array1)/(sizeof(int));
    for(int i = 0; i < ARRAY_SIZE; i++) {
        int_array1[i] = i;
    //    cout << "initialization value " << i << endl; 
    }

    cout << int_array1 << endl;
   // iterateOverArray(int_array1);

    int int_array2[ARRAY_SIZE] = {0,1,2,3,4,5,6,7,8,9};
    //cout << int_array2 << endl;
    //iterateOverArray(int_array2);

}
