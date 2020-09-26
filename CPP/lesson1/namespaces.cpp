#include <iostream>


void noNamespace() { 
    std::string message{"Not using namepsace!"}; // = is also valid
    std::cout << message << std::endl;
}

using namespace std;

void yesNamespace() {
   string message{"Using namespace!"};

   cout << message << endl;
}

int main() {
    noNamespace();
    yesNamespace();
    return 0;
}
