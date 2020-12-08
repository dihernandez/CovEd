#include <iostream>
#include <string>
#include <vector>

using namespace std;

class TestSubject {
    private:
        int secret_id;
    protected:
        string name;
    public:
        int public_id;  
        TestSubject(){};
        TestSubject(int secret_id, string name, int public_id):secret_id(secret_id),name(name),public_id(public_id){};
        int get_secret_id() {
            return secret_id;
        }


};

class Diana : public TestSubject {
    private:
        int age;
    public:
       Diana(int age):age(age){};
       void set_name(string new_name) { // why does this work (protected)
           name = new_name;
       }
       /* ths won't work. Why? */
       void set_secret_id(int new_id) {
           // secret_id new_id;
       }
       void set_public_id(int new_id) {
           public_id = new_id;
       }
};

class William : private TestSubject {
    private:
        string mood;
    public:
        William(){};
        void set_name(string new_name) {
            name = new_name;
        }
        void set_public_id(int new_id) {
            public_id = new_id;
        }
        int get_public_id(){
            return public_id;
        }
};


class Carlos: protected TestSubject {
    public:
        Carlos(){};
        void set_name(string new_name) { // why does this work (protected)
        name = new_name;
        }
        /* ths won't work. Why? */
        void set_secret_id(int new_id) {
            // secret_id new_id;
        }
        void set_public_id(int new_id) {
            public_id = new_id;
        }

};

int main(){
    TestSubject ts1(9889, "parent", 10);
    // cout << ts1.secret_id; This doesn't work- why?
    // cout << ts1.name; // This doesn't work- why?
    cout << "ts1 public id is " << ts1.public_id << endl; //This works
    Diana diher1(25);
    // cout << "Diana1's age is " << diher1.age << endl; This doesn't work
    // cout << diher1.secret_id; doesn't work
    cout << "diana's public id is " << diher1.public_id << endl;
    William w1;
    // cout << w1.public_id  << endl; doesn't work!
    cout << "William's public id is " << w1.get_public_id() << endl;
    Carlos c1;
    c1.set_public_id(34);
    //cout << "carlos public id " << c1.public_id << endl; doesn't work- why?
    
    return 0;
};
