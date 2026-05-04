#include<iostream>
using namespace std;
int main(){
    for (int i = 1; i <= 3; i++){ //The outer loop will execute 3 times, with i taking values from 1 to 3.
        for (int j = 1; j <= 10; j++){ //The inner loop will execute 10 times for each iteration of the outer loop, with j taking values from 1 to 10.
            cout<<j<<" "; //This line will print the current value of j.
        }
        cout<<endl; //This line will print a newline character after each iteration of the inner loop.  
    }

}