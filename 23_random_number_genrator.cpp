#include<iostream>
#include<cstdlib> // For rand() and srand()
#include<ctime>   // For time()
using namespace std;

int main(){
    // Seed the random number generator with the current time
    
    srand(time(0)); 
    
    // Generate a random number between 1 and 100
    
    int randomNumber = rand() % 100 + 1; 
    
    cout << "Random Number: " << randomNumber << endl; // Print the generated random number
    return 0;
}

// srand(...)
// This function sets the seed for the pseudo-random number generator used by rand().
// Think of the seed as the starting point—same seed → same sequence of “random” numbers.
// time(0)
// This returns the current time in seconds since January 1, 1970 (Unix epoch).
// Because time is always changing, it gives a different value each time you run the program (usually).