#include<iostream>
using namespace std;
int main(){
    cout<<"Enter Your Age: ";
    int age;
    cin>>age;
    if(age>=18){
        cout<<"You Are Eligible To Vote."<<endl;
    }
    else if(age<0){
        cout<<"Invalid Age."<<endl;
    }
    else{
        cout<<"You Are Not Eligible To Vote."<<endl;
    }
    return 0;
}