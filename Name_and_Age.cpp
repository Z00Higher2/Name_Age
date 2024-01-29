#include <iostream>
using namespace std; 

int main(){
    string name; // Declare the name variable
    cout << "Enter Your Name: ";
    cin >> name; // User inputs the name

    int age; // Declare the age variable
    cout << "Enter Your Age: ";
    cin >> age; // User inputs the age

    cout << "Hello " << name << ", and you will be " << age + 4 << " in 4 years" << endl;

    return 0;

}