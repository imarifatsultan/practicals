/*
	12.2.2 Write a C++ program that uses for loop.
*/


#include <iostream>

using namespace std;

int main() {
    
int num;
    
    
cout << "Enter a number to display its multiplication table: ";
    
cin >> num;

    
cout << "Multiplication table for " << num << " is:" << endl;

    
for (int j = 1; j <= 10; ++j) {
        
cout << num << " x " << j << " = " << num * j << endl;
    
}

    
return 0;

}
