#include <iostream>
#include <vector>

using namespace std;

vector<int> vectorize(int a, int b, int c) {
    vector<int> vect{a,b,c};
    return vect;
} 

void modify_vector(int a, int b, int c, vector<int> &to_modify) {
    to_modify.push_back(a);
    to_modify.push_back(b);
    to_modify.push_back(c);
}

int main() {
    vector<int> vectorized = vectorize(1,3,5);
    for(auto v: vectorized) {
        cout << v << endl;
    }
    vector<int> lives_in_main;
    modify_vector(1,3,5, lives_in_main);
    for(auto v: lives_in_main) {
        cout << v<< endl;
    }
    return 0;
}
