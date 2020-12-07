#include <iostream>
#include <string>

using namespace std;

int main(){
    int a, b;
    a = b = 1;
    float c = (float)a + .5;
    float d = c + a + .1;
    cout << "a is " << a << " c is " << c << endl;
    cout << "casting c is " << (int)c << endl;
    cout << "casting d is " << (int)d << endl; //note this is a floor function 
    return 0;
}
