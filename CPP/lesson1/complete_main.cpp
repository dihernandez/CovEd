#include <iostream>

using namespace std;

int main(int argc, char **argv) {

    cout << "This is the most complete form of main" << endl;

    cout << "argc is the count of number of arguments passed in through the command line " << argc << endl;

    cout << "argv is the list of arguments passed in. Argument 0 is the program name. This is an addres and the following is argv " << argv << endl;

    for(int i = 0; i < argc; i++) {
        cout << "argv[i]i is " << "for i " << i << " " << argv[i] << endl;
    }

    return 0;
}
