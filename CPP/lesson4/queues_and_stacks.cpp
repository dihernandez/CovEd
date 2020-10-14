#include <iostream>
#include <queue>
#include <stack>

using namespace std;

void queueDemo(){
    queue<int> q1;
    q1.push(1);
    q1.push(2);
    q1.push(3);
    
    cout << "after push " << q1.size() << endl;

    while(!q1.empty()) {

        cout <<  "popping from queue " << q1.front() << endl;
        q1.pop();
    }
    cout << "after pop " << q1.size() << endl;
}

void stackDemo(){
    stack<int> s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);

    cout << "after push" << s1.size() << endl;

    while(!s1.empty()) {
        cout << "popping from stack " << s1.top() << endl;
        s1.pop();
    }
    
    cout << "after pop " << s1.size() << endl;

}

int main() {

    queueDemo();
    stackDemo();

}   