/*
	14.1.5 Write a program involving user defined 
	function to perform basic arithmetic operations, 
	i.e. add, subtract, multiply and divide.
*/

#include <iostream>
using namespace std;

// functions declaration
void addition(double a, double b);
void subtraction(double a, double b);
void multiplication(double a, double b);
void division(double a, double b);

int main() {
    double a, b;

    cout << "Enter first number a : ";
    cin >> a;
    cout << "Enter second number b: ";
    cin >> b;
    
    // function calls
	cout << "\n\n";
    addition(a, b); 
    subtraction(a, b);
    multiplication(a ,b);
    division(a, b);
    return 0;
}

// functions definition
void addition(double a, double b) {
    double c = a + b;
    cout << "The addition of A+B is: " << c <<endl;
}

void subtraction(double a, double b){
    double c = a - b;
    cout<< "The subtraction of A-B is: "<< c <<endl;
}

void multiplication(double a, double b){
    double c = (a*b);
    cout<< "The Multiplication of A and B is:  "<< c<<endl;
}

void division(double a, double b){
    double c = (a/b);
    cout<<"The division of A/B is : "<< c;
}
