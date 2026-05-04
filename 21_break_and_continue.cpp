#include<iostream>
using namespace std;
int main(){
    for(int i = 0; i <= 5; i++){ //The for loop consists of three parts: initialization (int i = 0), condition (i < 5), and increment (i++). The loop will execute as long as the condition is true, and after each iteration, the increment will be executed.
        if(i == 2){ //The if statement checks if the current value of i is equal to 2. If this condition is true, the code block inside the if statement will be executed.
            continue; //The continue statement is used to skip the rest of the current iteration of the loop and move on to the next iteration. In this case, when i is equal to 2, the continue statement will cause the loop to skip the cout statement and proceed to the next iteration where i will be incremented to 3.
        }
        if(i == 4){ //The if statement checks if the current value of i is equal to 4. If this condition is true, the code block inside the if statement will be executed.
            break; //The break statement is used to exit the loop immediately, regardless of the loop's condition. In this case, when i is equal to 4, the break statement will cause the loop to terminate, and no further iterations will be executed.
        }
        cout<<i<<endl;
         //This line will print the current value of i followed by a newline character. Initially, it will print 0, then 1, 2, 3, and 4 on separate lines.
    }

}