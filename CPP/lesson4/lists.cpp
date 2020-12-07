#include <iostream>
#include <list>

using namespace std;

template <typename F>
void printListIterator(F list_to_print) {
    cout << "using iterator " << endl;
    for(list<string>::iterator it = list_to_print.begin(); it != list_to_print.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

template <typename F>
void printListAuto(F list_to_print) {
    //cout << "using auto " << endl;
    for(auto i : list_to_print) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {

    list<string> strings;
    list<int> ints;

    strings.push_back("one");
    strings.push_back("two");
    strings.push_back("three");

    ints.push_back(1);
    ints.push_back(2);
    ints.push_back(3);

    printListIterator<list<string>>(strings);
    // doesn't work cout << strings[0] << endl;
    // so the following doesn't work:
    //cout << "using counter " << endl;
    // for(int i = 0; i < min(strings.size(), ints.size()); i++) {

    //         cout << strings[i] << " " << ints[i] << endl;
    // }
    printListAuto<list<int>>(ints);

    ints.pop_front();
    printListAuto<list<int>>(ints);
    ints.pop_back();
    printListAuto<list<int>>(ints);
    ints.push_front(89);
    printListAuto<list<int>>(ints);


    list<int>::iterator it_start, it_end;
    it_start = it_end = ints.begin();
    it_end++;

    ints.erase(it_start, it_end);
    cout << "After push and erase " << endl;
    ints.push_front(1);
    ints.push_front(2);
    ints.push_front(3);
    ints.push_front(4);
    printListAuto<list<int>>(ints);

    // operations that are available for lists but not vectors
    ints.sort();
    cout << "after sort " << endl;
    printListAuto<list<int>>(ints);
    ints.reverse();
    cout << "after reverse " << endl;
    printListAuto<list<int>>(ints);

    list<int> ints2 {1,3,5,5,4};
    ints.merge(ints2);
    cout << "after merge " << endl; // merge requires lists be in numerical order
    printListAuto<list<int>>(ints);
}