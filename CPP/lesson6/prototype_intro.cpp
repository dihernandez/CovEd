#include <iostream>


using namespace std;


void somefunction(); //prototype allows us to declare function ahead of its implementation

int main() {
    
    somefunction();
    return 0;
}

void somefunction(){
    cout << "hi" << endl;
}