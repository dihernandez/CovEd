#include <iostream>
#include <string> 
using namespace std;

void do_something(int i, int j){
    cout << i + j << endl;
}

bool compareStr(string a, string b) {
    return a == b;
}

int main() {
    cout << "Hello from cpp" << endl;
    do_something(8,9);

    char mystr1[] = "askg";
    string mystr2 =  "askg";

    cout << compareStr(mystr1 , mystr2) << endl;
    return 0;
}   
