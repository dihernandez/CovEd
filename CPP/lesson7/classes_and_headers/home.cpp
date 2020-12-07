 #include <iostream>
 #include "test.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Test test1 = Test(2,4);
    cout << " x is " << test1.get_x() << " y is " << test1.get_y() << endl;

    test1.add_to_x(7);
    test1.add_to_y(43);

    cout << " x is " << test1.get_x() << " y is " << test1.get_y() << endl;
    return 0;
}

 