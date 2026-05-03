#include<iostream>  

int main(){

    // constant variables (values that cannot be changed after assignment)
    // constants are declared using the 'const' keyword and must be initialized at the time of declaration


    const double PI=3.14159; // declaration and assignment of constant variable PI
    const int MAX_AGE=120; // declaration and assignment of constant variable MAX_AGE
    const char GRADE='A'; // declaration and assignment of constant variable GRADE
    const bool IS_STUDENT=true; // declaration and assignment of constant variable IS_STUDENT
    const std::string SCHOOL_NAME="ABC University"; // declaration and assignment of constant variable SCHOOL_NAME

    std::cout<<"Value of PI: "<<PI<<std::endl;
    std::cout<<"Maximum Age: "<<MAX_AGE<<std::endl;
    std::cout<<"Grade: "<<GRADE<<std::endl;
    std::cout<<"Is Student: "<<IS_STUDENT<<std::endl;
    std::cout<<"School Name: "<<SCHOOL_NAME<<std::endl;

    return 0;
}