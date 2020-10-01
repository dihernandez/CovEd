#include <iostream>
#include <string>
using namespace std;

void func1(){
    cout << "This is the most basic function" << endl;
}


string func2(){
    return "This is how you return a value from a function";
}

void declaringVariables() {

    int a {9};
    cout << "a is " << a << endl;
    a = 10;
    cout << "a is " << a << endl;

}

void conditionalStatements(int i){
    if(i > 0 && i < 10){ // and
        cout << "i is small" << endl;
    } 
    else if (i > 10 && i < 100) { // and
        cout << "i is middle" << endl;
    } else if( i >= 100 || i < 0 ){  // or
        cout << "i is out of range" << endl;
    } 

}

void looping(int range) {
    cout << "standard for loop: " << endl;;
    for(int i = 0; i < range; i++) {
        cout << i << " ";
    }
    cout << endl;
    cout << "more modern for loop: " << endl;
    int int_array[] = {1,2,5,3,2};
    for(auto i : int_array) { // note this doesn't work with single values, i.e. you cannot say auto i : range
        cout << i << " ";
    }
    cout << endl;

    cout << "while loop basic: " << endl;
    int idx {0};
    while(idx <= range){ // note if I did idx < range, this loop would be different fromm the one below
        idx++;
        cout << idx << " ";
    } 
    cout << endl;

    bool initial_val = false;
    cout << "do while loops: " << endl;
    do {
        cout << "in  do while loop" << endl;
    } while (initial_val == true);

    while (initial_val == true)
    {
       cout << "this should not print anything" << endl;
    }
    


    cout << "while loop with conditional" << endl;
    idx = 0;

    while(true) {
        idx += 1;
        cout << idx << " ";
        if(idx >= range) {
            cout << endl;
            cout << "breaking out of loop " << endl;;
            break;
        }
    }


}

int main(){

    func1();
    string func2_result = func2();

    cout << func2_result  << endl;

    declaringVariables();
    conditionalStatements(9);
    conditionalStatements(50);
    conditionalStatements(-9);
    conditionalStatements(100);
    looping(6);
    return 0;
}
