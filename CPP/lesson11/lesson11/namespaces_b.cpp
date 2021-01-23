#include "namespaces_b.h"

int outer_space::inner_space::standaloneDouble(int a) {
        return a*2;
}

extern void outer_space::inner_space::Foo(int a){
    std::cout << "in Foo " << std::endl;
    std::cout << a << std::endl;
}    
