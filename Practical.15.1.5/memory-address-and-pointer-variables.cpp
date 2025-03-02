/*
	15.1.5 Write a simple program using & to return memory 
	address of a variable and storing it in a pointer variable.
*/

#include <iostream>

using namespace std ;

int main(){
    int x = 18 ;
    int *xPointer ;

    xPointer = &x ;

    cout << "\nThe value of x is :\t"<< x ;
    cout << "\nThe address of variable x is :\t"<< &x ;
    cout << "\nThe value of xPointer is :\t"<< xPointer ;


}
