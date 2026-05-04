#include<iostream>
using namespace std;
int main(){
    string name;
    cout<<"Enter Your Name: ";
    getline(cin, name); //getline() is used to read a line of text, including spaces, until the user presses Enter. It takes two arguments: the input stream (cin) and the string variable (name) where the input will be stored.
    if(name.length()>12){
        cout<<"Your name is too long!"<<endl;
    }
    else{
        cout<<"Your name is: "<<name<<endl; 
    }

    if (name.empty()){
        cout<<"You did not enter a name!"<<endl;
    }

    // name.clear(); //clear() is used to remove all characters from the string, making it empty. After calling clear(), the string will have a length of 0 and will be considered empty.

    name.append("@gmail.com"); //append() is used to add a string to the end of another string. In this case, it adds "@gmail.com " to the end of the name string.
    cout<<"Your email is: "<<name<<endl;

    cout<<"The first character of your email is: "<<name[0]<<endl; //You can access individual characters of a string using the subscript operator [].
    cout<<"The first character of your email is: "<<name.at(0)<<endl; //You can access individual characters of a string using the subscript operator [].

    name.insert(0, "@"); //insert() is used to insert a string at a specified position in another string. In this case, it inserts "@" at the beginning of the name string (position 0).
    cout<<"Your email is: "<<name<<endl;

    name.find( " @gmail.com" ); //find() is used to search for a substring within a string. It returns the index of the first occurrence of the substring, or string::npos if the substring is not found. In this case, it searches for "@gmail.com" in the name string.
    cout<<"The position of @gmail.com is: "<<name.find("@gmail.com")<<endl;

    name.erase(0, 1); //erase() is used to remove characters from a string. It takes two arguments: the starting index and the number of characters to remove. In this case, it removes 1 character starting from index 0, effectively removing the "@" that was inserted earlier.
    cout<<"Your email is: "<<name<<endl;
    return 0;
}