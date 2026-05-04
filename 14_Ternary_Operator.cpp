#include<iostream>
using namespace std;

//ternary operator(?:) is a shorthand for if-else statement. It takes three operands: a condition, a value to return if the condition is true, and a value to return if the condition is false. The syntax is: condition ? value_if_true : value_if_false;
int main(){
    cout<<"Enter Your Age: ";
    int age;
    cin>>age;
    age>=18 ? cout<<"You Are Eligible To Vote."<<endl : cout<<"You Are Not Eligible To Vote."<<endl;
    return 0;
}