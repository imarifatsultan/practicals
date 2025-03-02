/*
	14.1.9 Write a program involving user defined function 
	to calculate factorial of a given number.
*/

#include <iostream>
using namespace std;

void factorial(int n);

int main()
{
    cout << "------ Factorial Calculator ------" << endl;

    int n;
    cout <<"\nEnter the Number : ";
    cin >> n;


    if (n > 0) factorial(n);
    else cout << "Factorial of " << n << " : Undefined" << endl;
    
    

    return 0;
}

void factorial(int n)
{
    int fact = 1;
    for (int i = 1; i<=n; i++)
    {
        fact *= i;
    }
    
    cout << "\nFactorial of " << n << " : " << fact << endl;
}
