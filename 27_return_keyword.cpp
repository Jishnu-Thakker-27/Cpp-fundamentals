#include<iostream>
using namespace std;    

int area(int value); // Function declaration (prototype) for the area function
int main(){
    int radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius; // Read the radius value from the user
    area(radius); // Call the area function to calculate and display the area of the circle
    return 0; // The return statement indicates that the program has executed successfully and is exiting.
}

int area(int value){
    double area = 3.14159 * value * value; // Calculate the area of the circle using the formula A = πr²
    cout << "The area of the circle is: " << area << endl; // Print the calculated area
    return 0; // The return statement indicates that the function has executed successfully and is exiting.
}