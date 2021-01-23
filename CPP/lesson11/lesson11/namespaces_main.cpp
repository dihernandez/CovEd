#include "namespaces.h"
#include "namespaces_b.h"

/*
    Discovered: can have multiple files with the same namespace, but cannot have multiple\
    declarations within a single file. This includes implementations.
 */
int main(){
    outer_space::inner_space::Foo(8);
    outer_space::inner_space::Test t_red("red");
    other::Test t_blue("blue");
    std::cout << t_red.makePublic() << " " << t_blue.makePublic() << std::endl;
    std::cout << outer_space::inner_space::standaloneDouble(10) << std::endl;
    std::vector<std::string> rest = {"and","maybe", "goodbye"};
    outer_space::inner_space::TestStruct1 ts1 {"hello", rest};
    other::TestStruct1 ts2 {"goodbye", rest};
    std::cout << ts1.f1 << " " << ts2.f1 << std::endl;
    return 0;
}