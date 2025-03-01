/*
	13.1.7 Write a C++ program which stores numeric values in a one
	dimensional array using for loop and finds the highest, 
	lowest and average values.
*/

#include <iostream>

#include <vector>

using namespace std;


int main() {
   
   
string animal[4];
   
   
for (int i = 0; i < 4; ++i){
       
cout << "Animal name for index " << i << " : ";
       
getline(cin, animal[i]);
   
}
   
   
cout << "\n\n[ ";
   
for (int j = 0; j < 4; ++j){
       
cout << "\"" << animal[j] << "\"" << ",";
   
}
   
cout << " ]";

    
return 0;

}
