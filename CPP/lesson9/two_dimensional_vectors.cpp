#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<vector<int> > two_D_vector {{1,3,5},{11,5,8},{7,3,2}};
    cout << "using auto " << endl;
    for(auto outer : two_D_vector){
        for(auto inner : outer) {
            cout << inner << " ";
        }
        cout << endl;
    }

    cout << "using iterators " << endl;
    for(vector<vector<int> >::iterator it1 = two_D_vector.begin(); it1 != two_D_vector.end(); it1++) {
        for(vector<int>::iterator it2 = it1->begin(); it2 != it1->end(); it2++) {
            cout << *it2 << " ";
        }
        cout << endl;
    }

    cout << "using indices" << endl;

    for(int i = 0; i < two_D_vector.size(); i++) {
        for(int j = 0; j < two_D_vector[i].size(); j++) {
            cout << two_D_vector[i][j] << " ";
        }
        cout << endl;
    }

    vector<vector<int> > presized(3, vector<int>(4, 0));// initialize to all 0s
    cout << "all zeroes" << endl;
    for(auto outer : presized){
        for(auto inner : outer) {
            cout << inner << " ";
        }
        cout << endl;
    }

    for(int row = 0; row < presized.size(); row++) {
        for (int col = 0; col < presized[row].size(); col++) {
            presized[row][col] = row + col;
        }
    }
    cout << " sums " << endl;
    for(auto outer : presized){
        for(auto inner : outer) {
            cout << inner << " ";
        }
        cout << endl;
    }

    return 0;
}