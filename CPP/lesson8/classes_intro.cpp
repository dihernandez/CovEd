#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Review{
    private: // note cpp classes are private by default
        int secret_value;
        string secret_label;
    public:
        Review(){
            // this is the default constructor
        }
        Review(int value, string label) { // this initalizes the private variables throug a public constructor
            secret_value = value;
            secret_label = label;
        }
        /* could also do this:
            Review(int value, string label): secret_value{value}, secret_label{label} {}
        */
        int get_secret_value(){
           return secret_value; // this is private but belongs to the class so the class can make it visible through a geter method
           // note terminology  - a method is like a function but it belongs to a class, just like a variable is a member if it belongs to a class
           // a function is a self contained piece of code that exists on its own 
        }
        string get_secret_label(){
            return secret_label;
        }
};

int main(){
    Review r1 = Review();
    Review r2 = Review(10,"ten");
    cout << "r1 value is " << r1.get_secret_value() << " r1 label is " << r1.get_secret_label() << endl;
    cout << "r2 value is " << r2.get_secret_value() << " r2 label is " << r2.get_secret_label() << endl;

    return 0;
}