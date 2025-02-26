// 12.2.3 Write a C++ program that uses while loop.

#include <iostream>
using namespace std;


int main() {
    
int number;
    
long long factorial = 1;

    
cout << "Enter a positive integer: ";
    
cin >> number;

    
if (number< 0) {
        
cout << "Factorial is not defined for negative numbers." << endl;
    
} 
else {
        
cout << endl << number << "! :> ";

       
        
int i = number;
        
while (i > 1) {
            
cout << i << " X ";
            
factorial *= i;
            
i--;
        
}
        
        
cout << "1 = " << factorial << endl;
    
}

    
return 0;

}
