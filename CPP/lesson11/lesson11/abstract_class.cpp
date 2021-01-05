#include "abstract_class.h"

int absclass::DerivedClassDouble::modifyA(){
    int a  = getA();
    return 2*a;
}

int absclass::DerivedClassTriple::modifyA(){
    int a = getA();
    return 3*a;
}
