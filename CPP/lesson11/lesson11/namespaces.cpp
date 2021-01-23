#include "namespaces.h"        
#include "namespaces_b.h"


std::string outer_space::inner_space::Test::makePublic() {
    return color;
}


std::string other::Test::makePublic(){
    return color;
}

int outer_space::inner_space::standaloneDouble(int a) {
        return a*2;
}

extern void outer_space::inner_space::Foo(int a){
    std::cout << "In Foo" << std::endl;
    std::cout << a << std::endl;
} 