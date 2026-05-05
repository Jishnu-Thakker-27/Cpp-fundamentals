#include<iostream>
#include<cstdlib> // For rand() and srand()
#include<ctime>   // For time()
using namespace std;
int main(){  
    srand(time(0)); 
    
    
    int randomNumber = rand() % 5 + 1; 

    switch (randomNumber)
    {
    case 1:
        cout << "Event 1: You found a hidden treasure!" << endl;
        break;
    case 2:
        cout << "Event 2: You encountered a wild animal!" << endl;
        break;
    case 3:
        cout << "Event 3: You discovered a mysterious cave!" << endl;
        break;
    case 4:
        cout << "Event 4: You met a helpful traveler!" << endl; 
        break;
    case 5:
        cout << "Event 5: You stumbled upon an ancient ruin!" << endl;
        break;
    
    
    return 0;
}

}