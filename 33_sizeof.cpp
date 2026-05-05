#include<iostream>
using namespace std;
int main(){
    string name="Jishnu";
    cout<<"The size of name is: "<<sizeof(name)<<endl; // This will print the size of the string variable 'name' in bytes
    char grade='A';
    cout<<"The size of grade is: "<<sizeof(grade)<<endl; // This will
    double pi=3.14159;
    cout<<"The size of pi is: "<<sizeof(pi)<<endl; // This will print the size of the double variable 'pi' in bytes
    int age=25;
    cout<<"The size of age is: "<<sizeof(age)<<endl; // This will print the size of the int variable 'age' in bytes
    float salary=50000.50;
    cout<<"The size of salary is: "<<sizeof(salary)<<endl; // This will print the size of the float variable 'salary' in bytes

    int myArray[10];
    cout<<"The size of myArray is: "<<sizeof(myArray)<<endl; // This will print the size of the array 'myArray' in bytes (size of int * number of elements)

    cout<<"This array has "<<sizeof(myArray)/sizeof(myArray[0])<<" elements."<<endl; // This will print the number of elements in the array by dividing the total size of the array by the size of a single element
    return 0;
}