#include <iostream>

using namespace std;



int main() {
    
	string name;
    
	int age;
 
   
    
	cout << "Enter your name : ";
    
	getline(cin, name);
    
	cout << "Enter age : ";
    
	cin >> age;
  
  
    
	if (age<18){
        
		cout << "\nYour're not older enough to access this site.";
    
	}
    
	else if(age > 50){
        
		cout << "\nYou're too old to access this site.";
    
	}
    
	else {
        
		cout << endl << name << ", Welcome to site. Happy surfing..!";
    
	}

    
	return 0;

}