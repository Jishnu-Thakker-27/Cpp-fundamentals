#include<iostream>
#include<cmath>
using namespace std;

int  main(){
    //useful mathematical functions=functions that perform common mathematical operations

    double num1= -5.5;
    double num2= 3.2;
    cout<<max(num1, num2)<<endl; //maximum value
    cout<<min(num1, num2)<<endl; //minimum value
    cout<<abs(num1)<<endl; //absolute value
    cout<<pow(num2, 2)<<endl; //power
    cout<<sqrt(num2)<<endl; //square root
    cout<<round(num2)<<endl; //round to nearest integer
    cout<<ceil(num2)<<endl; //round up
    cout<<floor(num2)<<endl; //round down
    cout<<round(num1)<<endl; //round to nearest integer
    cout<<ceil(num1)<<endl; //round up
    cout<<floor(num1)<<endl; //round down
 
    return 0;
}