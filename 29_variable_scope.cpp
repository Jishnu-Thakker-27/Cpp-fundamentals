#include<iostream>
using namespace std;

int mynumber = 10; // This is a global variable, accessible throughout the entire program
int main(){
    int mynumber = 5; // This is a local variable, it shadows the global variable within this function
    cout<<"Hello, World!"<<endl;
    cout << "The value of mynumber is: " << mynumber << endl; // This will print the value of the local variable mynumber
    cout << "The value of mynumber is: " << ::mynumber << endl; // This will print the value of the global variable mynumber
    return 0;

    // In this example, we have a global variable named mynumber with a value of 10. Inside the main function, we declare a local variable with the same name mynumber and assign it a value of 5. When we print mynumber inside the main function, it refers to the local variable, so it will output 5. To access the global variable, we use the scope resolution operator (::) before the variable name, which allows us to access the global variable even when there is a local variable with the same name. Therefore, ::mynumber will output 10.
}