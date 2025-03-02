/*
	16.1.2 Write a C++ program to declare a class along with data members and member functions  
	in its body and create the objects of class in the main( ) function and call 
	member functions of class with the help of objects. 
*/

#include <iostream>

using namespace std; 

class Student{
    private:  
        
        string name;
        int rollNo;
        string grade;
    
    public:  
    
    	void setProfile(string x, int y, string z){
    		name = x;
    		rollNo = y;
    		grade = z;
		}
        
        void showProfile(){
            cout << "\n\nStudent Profile\n\n";
            cout << "Name :\t" << name << endl;
            cout << "Roll no :  " << rollNo<< endl;
            cout << "Grade :\t" << grade << endl;
        }
};

int main(){
	string name;
	int rollNo;
	string grade;
	
	cout << "Enter your name : ";
	getline(cin, name);
	cout << "Enter your roll no : ";
	cin >> rollNo;
	cout << "Enter your grade : ";
	cin.ignore();
	getline(cin, grade);
  
    Student std;

    std.setProfile(name, rollNo, grade);
    std.showProfile();
    
    return 0;
}
