/*
	12.1.5 Write a program using switch statement.
*/

#include <iostream>

using namespace std;


int main() {
    
char grade;
    
string name, rollno;
    
double totalMarks, obtainedMarks, percent;
    
   
cout << "\nEnter your name : ";
    
getline(cin, name);
    
cout << "Enter your roll no : ";
    
cin >> rollno;
    
cout << "Enter total marks : ";
    
cin >> totalMarks;
    
cout << "Enter obtained marks : ";
    
cin >> obtainedMarks;
    
    
percent = (obtainedMarks/totalMarks)*100;
    
    
if (percent < 40){
        
grade = 'F';
    
}
    
else if(percent >= 40 || percent <= 60){
        
grade = 'C';
    
}
    
else if(percent > 60 || percent <= 80){
        
grade = 'B';
    
}
    
else if(percent > 80 || percent <=100){
        
grade = 'A';
    
}
    
else {
        
cout << "\nSomething went wrong....!";
    
}
    
    
switch(grade){
        
case 'A':
            
cout << "\n\nMr. " << name <<endl;
            
cout << "Roll No, " << rollno << endl;
            
cout << "Percentage, " << percent << "%" << endl;
            
cout << "Woooow, your are passed with (" << grade << ") grade.";
        
break;
        
case 'B':
            
cout << "\n\nMr. " << name <<endl;
            
cout << "Roll No, " << rollno << endl;
            
cout << "Percentage, " << percent << "%" << endl;
            
cout << "Hmmmmn, your are passed with (" << grade << ") grade.";
        
break;
        
case 'C':
            
cout << "\n\nMr. " << name <<endl;
            
cout << "Roll No, " << rollno << endl;
            
cout << "Percentage, " << percent << "%" << endl;
            
cout << "Emmmmn, your are passed with (" << grade << ") grade.";
        
break;
        
case 'F':
            
cout << "\n\nMr. " 
<< name <<endl;
            
cout << "Roll No, " << rollno << endl;
            
cout << "Percentage, " << percent << "%" << endl;
            
cout << "Awwwww, your are passed with (" << grade << ") grade.";
        
break;
        
default:
            
cout << "something gone wrong.....!";
        
    
}

    
return 0;

}
