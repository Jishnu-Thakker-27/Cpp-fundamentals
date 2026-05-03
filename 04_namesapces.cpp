#include<iostream>


// Namespaces in C++ are used to organize code and prevent name conflicts. They allow you to group related classes, functions, and variables together under a common name. The most commonly used namespace in C++ is the 'std' namespace, which contains all the standard library functions and objects.
// To use a namespace, you can either use the 'using' directive or the scope resolution operator '::' to access the members of the namespace.

namespace first{
    int x=1;
}
namespace second{
    int x=2;
}

int main(){

    int x=0;
    std::cout<<"Value of x in main: "<<x<<std::endl; // Accessing x in main function
    std::cout<<"Value of x in first namespace: "<<first::x<<std::endl; // Accessing x in first namespace using scope resolution operator
    std::cout<<"Value of x in second namespace: "<<second::x<<std::endl; // Accessing x in second namespace using scope resolution operator
}