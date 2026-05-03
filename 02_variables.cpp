#include<iostream>
int main(){

    int x; // declaration of variable x
    x = 5; // assignment of value 5 to variable x
    int y=10; // declaration and assignment of variable y with value 10
    int sum; // declaration of variable sum

    sum=x+y; // sum of x and y stored in variable sum

    std::cout<<x<<std::endl;
    std::cout<<y<<std::endl;
    std::cout<<sum<<std::endl;

    //integer(whole number)
    int age=21;
    int year=2026;
    int days=365;

    //double(number including decimal)
    double  price= 19.99;
    double gpa=7.42;
    double temperature=36.5;

    std::cout<<price<<std::endl;
    std::cout<<gpa<<std::endl;  
    std::cout<<temperature<<std::endl;

    // character (single character)
    char grade='A';
    char initial='J';
    char letters='JK';
    char symbol='$';

    std::cout<<initial<<std::endl;
    std::cout<<letters<<std::endl; //it will only print the last character 'K' because char can only hold a single character
    
    //boolean (true or false)
    bool isStudent=true;
    bool isGraduated=false;
    bool forsale=true;
    bool power=false;


    // string (sequence of characters)
    std::string name="Jishnu";
    std::string food="Pizza";
    std::string day="Wednesday";

    std::cout<<"Hello, "<<name<<"!"<<std::endl;
    std::cout<<"You like "<<food<<"."<<std::endl;
    std::cout<<"Today is "<<day<<"."<<std::endl;

    return 0;
}