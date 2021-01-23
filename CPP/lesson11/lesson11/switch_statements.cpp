#include <iostream>
#include <cmath>

void switch_example() {

    int a = std::rand()%5; 
    
    switch (a)
    {
    case 1:
        std::cout << "1 was selected" << std::endl;
        break;
    case 2:
        std::cout << "2 was selected" << std::endl;
        break;
    case 3:
        std::cout << "3 was selected" << std::endl;
        break;
    case 4:
        std::cout << "4 was selected" << std::endl;
        break;
    case 5:
        std::cout << "5 was selected" << std::endl;
        break;        
    default:
        std::cout << "In Default. Should never reach this" << std::endl;
        break;
    }
}

int main() {
    switch_example();
    return 0;
 
}