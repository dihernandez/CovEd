#include <iostream>
#include <climits>
#include <limits>

using namespace std;

int main(){

    int an_integer {1}; // could also say: an_integer = 1 etc.
    char a_character {'0'};
    bool a_boolean {true};
    float a_float {.0912}; // 32 bit
    double a_double {10000022211212.1122123}; // 64 bit
    // void

    printf("an integer is printed here %d, a character here %c, a boolean here %d, a float here %f and a double here %f \n", an_integer, a_character, a_boolean, a_float, a_double);
    // note that printf automatically interpertes a float %f as a double

    cout << "an integer " << an_integer << " a character " << a_character << " a boolean " << a_boolean << "a float " << a_float << "a double" << a_double << endl;

//---------------------------------------------------------------------------------

    cout << "Max int value is " << INT_MAX << " Min int value is " << INT_MIN << " unsigned int max is " << UINT_MAX << " unsinged int min is " << 0 << endl;

    cout << "float max " << numeric_limits<float>::max() << " double max " << numeric_limits<double>::max() << endl;


    return 0;
}
