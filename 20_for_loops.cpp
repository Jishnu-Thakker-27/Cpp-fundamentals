#include<iostream>
using namespace std;
int main(){
    for(int i=0; i<5; i++){ //The for loop consists of three parts: initialization (int i = 0), condition (i < 5), and increment (i++). The loop will execute as long as the condition is true, and after each iteration, the increment will be executed.
        cout<<i<<endl; //This line will print the current value of i followed by a newline character. Initially, it will print 0, then 1, 2, 3, and 4 on separate lines.
    }
    return 0;
}