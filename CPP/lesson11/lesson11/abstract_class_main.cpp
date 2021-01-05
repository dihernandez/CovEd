#include "abstract_class.h"
#include <iostream>

int main() {    
    absclass::DerivedClassDouble dclass_double;
    absclass::DerivedClassTriple dclass_triple;

    dclass_double.setA(5);
    dclass_triple.setA(5);

    std::cout << "double is " << dclass_double.modifyA() << std::endl;
    std::cout << "triple is " << dclass_triple.modifyA() << std::endl;


    return 0;
}