#include<iostream>
#include<cmath>
using namespace std;
int main(){

    cout<<"Enter The Length Of The First Side Of The Triangle: ";
    double side1;
    cin>>side1;
    cout<<"Enter The Length Of The Second Side Of The Triangle: ";
    double side2;
    cin>>side2;
    cout<<"The Hypotenuse Of The Triangle Is: "<<sqrt(pow(side1, 2) + pow(side2, 2))<<endl;
    return 0;
}