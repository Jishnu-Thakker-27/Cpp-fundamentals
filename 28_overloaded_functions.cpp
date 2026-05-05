#include<iostream>
using namespace std;
void greet(); // Function declaration (prototype) for the greet function
void greet(string name); // Function declaration (prototype) for the overloaded greet function that takes a string parameter
void greet(string name, int age); // Function declaration (prototype) for the overloaded greet function that takes a string and an int parameter
int main(){
    greet(); // Call the greet function without parameters  
    greet("Alice"); // Call the greet function with a name parameter
    greet("Bob", 30); // Call the greet function with a name and age parameter
    return 0;
}   

void greet(){
    cout << "Hello! Welcome to C++ programming!" << endl; // This function prints a greeting message
}
void greet(string name){
    cout << "Hello, " << name << "! Welcome to C++ programming!" << endl; // This function prints a personalized greeting message using the provided name
}
void greet(string name, int age){
    cout << "Hello, " << name << "! You are " << age << " years old. Welcome to C++ programming!" << endl; // This function prints a personalized greeting message using the provided name and age
}