#include<iostream>
using namespace std;    

int main(){
    //user input=allowing the user to enter data into the program
    //cin=character input stream

    string name;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Hello "<<name<<endl;

    int age;
    cout<<"Enter your age: ";
    cin>>age;
    cout<<"You are "<<age<<" years old"<<endl;

    double height;
    cout<<"Enter your height in cm: ";
    cin>>height;
    cout<<"Your height is "<<height<<" cm"<<endl;

    // cin can only read one word at a time, to read a full line we can use getline()
    string fullName;
    cout<<"Enter your full name: ";
    cin.ignore(); // ignore the newline character left in the input buffer
    getline(cin, fullName);
    cout<<"Your full name is "<<fullName<<endl;

    return 0;
}