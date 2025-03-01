/*
	12.2.4 Write a C++ program that uses do while loop.
*/

#include <iostream>
using namespace std;


int main() {
    
int number;
    
char choice;

    
do {
        
cout << "Enter a number: ";
        
cin >> number;

        
cout << "The square of " << number << " is " << number * number << endl;

        
cout << "Do you want to enter another number? (y/n): ";
        
cin >> choice;

    
} while (choice == 'y' || choice == 'Y');

    
cout << "Thank you for using the program...!" << endl;

    return 0;
}
