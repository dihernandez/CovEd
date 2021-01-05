#include "namespaces.h"        

std::string outer_space::inner_space::Test::makePublic() {
    return color;
}


std::string other::Test::makePublic(){
    return color;
}