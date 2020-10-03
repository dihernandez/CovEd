#include <iostream>
#include <vector>

using namespace std;

template <typename F>
void printVectorUsingIterator(F vector_to_print) {
    cout << "using iterator " << endl;
    for(typename F::iterator it = vector_to_print.begin(); it != vector_to_print.end(); it++) {
        cout << *it << endl;
    }
}

template<typename F>
void printVectorUsingAuto(F vector_to_print) {
    cout << "using auto " << endl;
    for(auto i : vector_to_print) {
        cout << "ints at i is " << i << endl;
    }
}


int main() {
    vector<string> strings;
    vector<int> ints;

    strings.push_back("one");
    strings.push_back("two");
    strings.push_back("three");

    ints.push_back(1);
    ints.push_back(2);
    ints.push_back(3);

    cout << "using counter " << endl;
    for(int i = 0; i < min(strings.size(), ints.size()); i++) {

            cout << strings[i] << " " << ints[i] << endl;
    }

    printVectorUsingIterator<vector<int>>(ints);

    printVectorUsingAuto<vector<string>>(strings);




    return 0;
}