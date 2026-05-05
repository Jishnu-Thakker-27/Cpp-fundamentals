#include<iostream>
using namespace std;
int main(){
    // Declare and initialize an array of integers with 5 elements
    int myArray[5] = {10, 20, 30, 40, 50};  
    // Access and print the elements of the array using a loop
    myArray[0] = 100; // Update the first element of the array to 100
    myArray[1] = 200; // Update the second element of the array to 200
    myArray[2] = 300; // Update the third element of the array to 300
    myArray[3] = 400; // Update the fourth element of the array to 400
    myArray[4] = 500; // Update the fifth element of the array to 500
    cout << "Array elements: ";
    for (int i = 0; i < 5; i++){
        cout << myArray[i] << " "; // Print each element of the array followed by a space
    }   
    return 0;
}   