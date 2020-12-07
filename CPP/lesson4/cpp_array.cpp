#include <iostream>
#include <array>
#include <string>
using namespace std;

int main() {

//------------------------------------------------------------
// c array (review)
    int c_style_array1[] = {1,2,3,4,5};
    int c_style_array2[5];
    //  the following won't work- why?
    // for(int i = 0; i < c_style_array2.size(); i++) {
    //     cout << c_style_array2[i] = i + 1 << endl;
    // }

    // the big difference is that c style arrays don't know they're size 
    for(int i = 0; i < sizeof(c_style_array2)/sizeof(int); i++) {
        c_style_array2[i] = i + 1;
    }

    //the following is fine
    cout << "printing c style array2" << endl;
    for(auto element : c_style_array2) {
        cout << element << endl;
    }


//------------------------------------------------------------
// CPP Array
    array<int, 5> arr1 = {1,2,3,4,5};
    array<int, 5> arr2;
    for(int i = 0; i < arr2.size(); i++) {
        arr2.at(i) = i + 1;
    }

    cout << "printing array with auto" << endl;
    for(auto element : arr2) {
        cout << element << endl;
    }
    cout << "printing array with index " << endl;
    for(int i = 0; i < arr2.size(); i++) {
        cout << arr2[i] << endl;
    }
    cout << "are equal? " << endl;
    cout << (arr1 == arr2) << endl;
  
    cout << "First element of array is : "; 
    cout << arr2.front() << endl; 

    cout << "Last element of array is : "; 
    cout << arr2.back() << endl; 

    array<int, 5> arr3 = {1,7,4,21,1};

    cout << "arr3 is " << endl; 
    for (auto el: arr3) {
        cout << el << endl;
    }

    arr2.swap(arr3);

    cout << "just swapped " << endl;
    for(auto el: arr3) {
        cout << el << endl;
    }
    array<int, 0> arr4;
    cout <<" is arr4 empty? " << arr4.empty() << "is arr3 empty? " << arr3.empty() << endl;
    arr4.fill(1);

    array<int, 5> arr5;
    arr5.fill(1);
    cout << "printing filled arr5 " << endl;
    for(auto el: arr5) {
        cout << el << endl;
    }
    auto mystr = "jafk";
    string mystr2 = "jafk";
    cout << mystr << (mystr == mystr2) << endl;
    return 0;
}