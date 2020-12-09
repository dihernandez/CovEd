#include <iostream>
#include <string>

using namespace std;

string is_even(int n){
    return n%2 == 0 ? "even" : "odd"; 
}

int main(){
    cout << "is_even " << is_even(3) << endl;
    int a = 9, b = 18;
    int chosen = (a > b) ? b : a;
    cout << "chosen is " << chosen << endl;
    int c;
    ((a > b) ? a : b) = c;
    cout << "c is " << c << endl;
    return 0;
}