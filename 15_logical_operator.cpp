#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter A Number: ";
    cin>>number;
    if(number>0 && number%2==0){
        cout<<"The Number Is Positive And Even."<<endl;
    }
    else if(number>0 && number%2!=0){
        cout<<"The Number Is Positive And Odd."<<endl;
    }
    else if(number<0 && number%2==0){
        cout<<"The Number Is Negative And Even."<<endl;
    }
    else if(number<0 && number%2!=0){
        cout<<"The Number Is Negative And Odd."<<endl;
    }
    else{
        cout<<"The Number Is Zero."<<endl;
    }

    int age;
    cout<<"Enter Your Age: ";   
    cin>>age;
    if(age>=18 || age==0){
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