#include <iostream>
#include <string>
#include <vector>

using namespace std;

class BaseClass1{
    protected:
        int field1;
        string field2;
    public:
        BaseClass1(){};
        BaseClass1(int f1, string f2): field1(f1), field2(f2){};
        int get_field1() {
            return field1;
        }
        string get_field2(){
            return field2;
        }
};

class BaseClass2{
    protected:
        int field3;
        string field4;
    public:
        BaseClass2(){};
        BaseClass2(int f3, string f4): field3(f3), field4(f4){};
        int get_field1() {
            return field3;
        }
        string get_field2(){
            return field4;
        }
};

class BaseClass3{
    protected:
        int field5;
        string field6;
    public:
        BaseClass3(){};
        BaseClass3(int f5, string f6): field5(f5), field6(f6){};
        int get_field1() {
            return field5;
        }
        string get_field2(){
            return field6;
        }
};

class DerivedClass : public BaseClass1, public BaseClass2, public BaseClass3 {
    public:
        DerivedClass(int f1, string f2, int f3, string f4, int f5, string f6){
            field1 = f1;
            field2 = f2;
            field3 = f3;
            field4 = f4;
            field5 = f5;
            field6 = f6;
        }
        vector<pair<int, string> > get_all_fields(){
            vector<pair<int, string> > all_pairs;
            all_pairs.push_back(make_pair(field1, field2));
            all_pairs.push_back(make_pair(field3, field4));
            all_pairs.push_back(make_pair(field5, field6));
            return all_pairs;
        }
};


int main(){
    DerivedClass derived(1,"one",2,"two", 3, "three");
    vector<pair<int, string> > fields = derived.get_all_fields();
    for(vector<pair<int, string> >::iterator p_it = fields.begin(); p_it != fields.end(); p_it++) {
        cout << p_it->first << " " << p_it->second << endl;
       //or cout << (*(p_it)).first << (*(p_it)).second<< endl;
    }
    return 0;
};
