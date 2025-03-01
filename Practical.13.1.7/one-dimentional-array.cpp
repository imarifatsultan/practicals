/*
	13.1.7 Write a C++ program which stores numeric values in a one
	dimensional array using for loop and finds the highest, 
	lowest and average values.
*/

#include <iostream>

#include <vector>

using namespace std;


int main() {
   
   
string fruits[4];
   
   
for (int i = 0; i < 4; ++i){
       
cout << "Fruit name for index " << i << " : ";
       
getline(cin, fruits[i]);
   
}
   
   
cout << "\n\n[ ";
   
for (int i = 0; i < 4; ++i){
       
	cout << "\"" << fruits[i] << "\"";
	if (i < 3){
		cout << ",";
	}

   
}
   
cout << " ]";

    
return 0;

}
