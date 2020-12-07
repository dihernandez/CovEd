#include <iostream>
#include <set>
#include <vector>

using namespace std;

void printIntSet(set<int> set_to_print) {
    for(set<int>::iterator it = set_to_print.begin(); it != set_to_print.end(); it++) {
        cout << *it << ", ";
    }
}

int main() {
    set<int> set1;
    vector<int> values {1,2,3,2,1,2};

    for(auto v : values){
        set1.insert(v);
    }

    cout <<"Printing set 1" << endl;
    printIntSet(set1);


    set<int> set2(set1.begin(), set1.end());
    cout <<"Printing set 2" << endl;
    printIntSet(set2);

    cout << endl;
    set2.insert(4);
    set2.insert(5);
    printIntSet(set2);
    set<int>::iterator lb = set2.lower_bound(2);
    set<int>::iterator ub = set2.upper_bound(4);
    set2.erase(lb, ub);
    cout << "Printint modified set 2 "<< endl;
    printIntSet(set2);
    cout << endl;
    set2.insert(3);
    set2.insert(4);
    pair<set<int>::iterator, set<int>::iterator> range = set2.equal_range(3);
    
    cout << "Printing expanded set 2 " << endl;
    printIntSet(set2);
    cout << endl;
    cout <<  "range first " << *range.first << endl;
    cout << "range second " << *range.second << endl;
    return 0;
}
