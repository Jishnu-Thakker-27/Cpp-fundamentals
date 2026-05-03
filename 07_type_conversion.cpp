#include<iostream>
using namespace std;

int main(){
    //type conversion=converting one data type to another data type
    //implicit type conversion=automatically converting one data type to another data type
    //explicit type conversion=manually converting one data type to another data type
    int x=10;
    double y=5.5;
    //implicit type conversion
    double z= x+y;
    cout<<z<<endl;
    //explicit type conversion
    double a=10.5;
    int b= (int)a;
    cout<<b<<endl;  
     

    int correct= 8;
    int total= 10;
    double percentage1=correct/total*100;
    double percentage2= (double)correct/total*100;
    cout<<percentage1<<endl;
    cout<<percentage2<<endl;


    return 0;
}