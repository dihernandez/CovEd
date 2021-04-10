#include <iostream>
#include <vector>

using namespace std;

class InnerClass {
    private:
        int some_int;
    public:
        InnerClass(int some_int_input) : some_int(some_int_input) {}
       void  print_inner_class() {
           cout << some_int << endl;
       }
};

class OuterClass {
    private:
        vector<InnerClass*> internal_field;
    public:
    OuterClass(){}
    OuterClass(vector<InnerClass*> internal_field_input) : internal_field(internal_field_input){} 

    void print_outer_class() {
        for(auto num: internal_field) {
            cout << num << endl;
        }
    }
    ~OuterClass() {
        cout << "deleting internal field in deconstructor" << endl;
    }
};

int main() {
    OuterClass outer_class_instance = OuterClass();
    vector<InnerClass*> inner_class_vector;
    for(int i = 0; i < 10; ++i) {
        InnerClass inner_class_instance = InnerClass(i);
        inner_class_vector.push_back(&inner_class_instance);
    }
    OuterClass *outer_class_instance_paramterized = new OuterClass(inner_class_vector);

    OuterClass *other_owner_class_instance_paramterized = outer_class_instance_paramterized;


    delete outer_class_instance_paramterized;
    other_owner_class_instance_paramterized->print_outer_class(); // Why is this bad?

    unique_ptr<OuterClass> outer_class_unique_ptr = make_unique<OuterClass>(inner_class_vector);
    // this shouldn't work. Why?
    // auto copy = outer_class_unique_ptr;
    auto new_pointer = move(outer_class_unique_ptr);
    cout << "printing new pointer " << endl;
    new_pointer->print_outer_class();
    return 0;
}