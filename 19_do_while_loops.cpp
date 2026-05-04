#include<iostream>
using namespace std;
int main(){
    int i = 0;
    do{ //The do-while loop will execute the code block at least once, and then continue to execute as long as the condition (i < 5) is true.
        cout<<i<<endl; //This line will print the current value of i followed by a newline character. Initially, it will print 0, then 1, 2, 3, and 4 on separate lines.
        i++; //This line increments the value of i by 1 in each iteration of the loop. This is crucial to ensure that the loop eventually terminates when i reaches 5.
    }while(i<5);
    return 0;
}