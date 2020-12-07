#include <iostream>

using namespace std;

struct Circle {
    int radius;
    int x_origin;
    int y_origin;
};

struct MyStruct1 {
    int val1;
    char val2;
};

struct MyStruct2 {
    int val1;
    char val2;
} mystruct2;

int main(){
    Circle circle1;
    circle1.radius = 10;
    circle1.x_origin = 0;
    circle1.y_origin = 0;
    Circle circle2= {9,-2,2};

    cout << "circle 2 radius" << circle2.radius << endl;
    Circle *pcircle1 = &circle1;
    Circle *pcircle2 = &circle2;
    cout << "circle pointers " << pcircle1->radius << " " << pcircle1->x_origin << " " << pcircle1->y_origin;
    cout << "circle pointers " << (*(pcircle2)).radius << " " << (*(pcircle2)).x_origin << " " << (*(pcircle2)).y_origin;

    // unsigned int *nonsense = 0xDEADBEEF;
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

    cout << "derefrencing " << endl;
    cout << mystruct2.val1 << " , " << (*(pstruct2)).val1 << endl;
    cout << mystruct2.val2 << " , " << (*(pstruct2)).val2 << endl;

    return 0;
}

