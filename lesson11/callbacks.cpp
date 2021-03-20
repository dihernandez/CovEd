#include <iostream>
#include <string>

using namespace std;

void to_copy_basic() {
    cout << "in to_copy_1" << endl;
}

void to_copy_with_parameter(int a_value) {
    cout << " parameter is " << a_value << endl;
}

int to_copy_with_return_type(int a_value) {
    cout << " returning " << a_value << endl;
    return a_value*2;
}

int main() {
    function<void()> rename_basic = to_copy_basic;
    function<void(int)> rename_parameter = to_copy_with_parameter;
    function<int(int)> rename_return_type = to_copy_with_return_type;
    rename_basic();
    rename_parameter(9);
    int returned_value = rename_return_type(9);
    cout << "returned value is " << returned_value << endl;

    // technically [](){} is a valid lambda function, it just doesn't do anything
    function<void()> lambda_basic = [](){
        cout << "inside lambda basic " << endl;
    };
    // A capture clause is passed within the [] brackets. 
    // Capture clauses are ways to pass variables local to the function, i.e.
    // here I will pass my variable to_capture
    // A capture clause is usefull when you want to pass something into the function without 
    // changing its signature
    string to_capture = "hello";
    auto lambda_with_capture_clause = [to_capture]() {
        cout << "captured variable is " << to_capture << endl;
    };
    // Paramters go in the () brackets.
    // They work just like any parameters in a function
    auto lamdbda_with_parameters = [to_capture] (int word_multiplier) {
        cout << "in lambda with parameters" << endl;
        for (int i = 0; i < word_multiplier; ++i) {
            cout << to_capture << endl;
        }
    };

    // We can add a return type by adding it to the end of the -> operator before the {} operators
    auto lambda_with_return_type = [ to_capture ] (int word_multiplier) -> string {
        string result = "";
        for(int i = 0; i < word_multiplier; ++i) {
            result += to_capture;
        }
        return result;
    };

    lambda_with_capture_clause();
    lamdbda_with_parameters(7);
    string return_type_receiver = lambda_with_return_type(5);
    cout << return_type_receiver << endl;
    return 0;
}