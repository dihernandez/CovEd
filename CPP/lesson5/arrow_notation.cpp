#include <iostream>

using namespace std;
struct MyStruct1 {
    int val1;
    char val2;
};

struct MyStruct2 {
    int val1;
    char val2;
} mystruct2;

int main(){
    MyStruct1 mystruct1;
    mystruct1.val1 = 9;
    mystruct1.val2 = 'a';
    mystruct2.val1 = 6;
    mystruct2.val2 = 'c';

    MyStruct1 *pstruct1 = &mystruct1;
    MyStruct2 *pstruct2 = &mystruct2;
    cout << mystruct1.val1 << " , " << pstruct1->val1 << endl;
    cout << mystruct1.val2 << " , " << pstruct1->val2 << endl;
    cout << "struct 2 " << endl;
    cout << mystruct2.val1 << " , " << pstruct2->val1 << endl;
    cout << mystruct2.val2 << " , " << pstruct2->val2 << endl;
    return 0;
}

