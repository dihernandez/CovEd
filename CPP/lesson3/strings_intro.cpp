#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main() {
    string my_string = "abc";
    cout << my_string << endl;
   my_string += "def";
    my_string.append("ghi ");
    cout << my_string << endl;

    string my_substring = my_string.substr(3,my_string.length());
    cout << my_substring << endl;


    for(string::iterator it = my_string.begin(); it != my_string.end(); it++) {
        cout << *it << endl;
    }

    cout << "string size is " << my_string.size() << " string length is " << my_string.length() << endl;

    string copy = my_string;
    cout << copy << endl;
    copy.clear();
    cout << "printing copy again" << copy.length() << endl; 

    cout << "you can access a character like this " << endl;
    for(int i = 0; i < my_string.length(); i++) {
        cout << i << " " << my_string[i];
    }
    cout << endl;

    cout << "current string " << my_string << endl;
    my_string.insert(0,"132");
    cout << "after insert string " << my_string << endl;
    my_string.pop_back();
    cout << "after pop back string " << my_string << endl;


    string s1 = "abc";
    string s2 = "abc";
    cout << "are strings same ? " << (s1 == s2) << " compare " <<  !s1.compare(s2) <<  endl; // compare is 0 when equal

    cout << "mystring is " << my_string << endl;
    cout << "find substring " << my_string.find(s1) << endl;
    cout << "find substring " << my_string.find("abc") << endl; 
    cout << "find substring " << my_string.find("12") << endl; //what's that number?

    my_string.erase(1,5);
    cout << "after erase string " << my_string << endl;

    cout << atoi(my_string.c_str()) << endl; //cannot do atoi(mystring)! Why?

    return 0;
}