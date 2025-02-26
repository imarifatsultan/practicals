// 12.1.3 Write a program using nested if statement.


#include <iostream>

using namespace std;


int main() {
    
// 12.1.3 Write a program using nested if statement.
    
int numcode, pkgchoice, offrchoice;
    
cout << "------- SCOM4G -------\n\n";
    
    
cout << "Enter the code : ";
    
cin >> numcode;
    
    
if (numcode == 725){
        
cout << "\n1.Call Packages";
        
cout << "\n2.Data Packages";
        
cout << "\n3.SMS Packages";
        
cout << "\n0.Back\n\n";
        
cin >> pkgchoice;
        
if (pkgchoice == 1){
            
cout << "1.Daily Call offer";
            
cout << "\n2.Weekly Call Offer";
            
cout << "\n3.Monthly Call Offer";
            
cout << "\n4.Back\n";
            
cin >> offrchoice;
            
            
if (offrchoice == 1 || offrchoice == 2 || offrchoice == 3 || offrchoice == 4){
                
cout << "\n1.Subscribe the offer";
                
cout << "\n2.Back";
            
}
            
else {
                
cout << "\nInvalid MMI.";
            
}
        
}
        
else if (pkgchoice == 2){
            
cout << "1.Daily Data offer";
            
cout << "\n2.Weekly Data Offer";
            
cout << "\n3.Monthly Data Offer";
            
cout << "\n4.Back\n";
            
cin >> offrchoice;
            
            
if (offrchoice == 1 || offrchoice == 2 || offrchoice == 3 || offrchoice == 4){
                
cout << "\n1.Subscribe the offer";
                
cout << "\n2.Back\n";
            
}
            
else {
                
cout << "\nInvalid MMI.";
            
} 
        
}
        
else if (pkgchoice == 3){
            
cout << "1.Daily SMS offer";
            
cout << "\n2.Weekly SMS Offer";
            
cout << "\n3.Monthly SMS Offer";
            
cout << "\n4.Back\n";
            
cin >> offrchoice;
            
            
if (offrchoice == 1 || offrchoice == 2 || offrchoice == 3 || offrchoice == 4){
                
cout << "\n1.Subscribe the offer";
                
cout << "\n2.Back\n";
            
}
            
else {
                
cout << "\nInvalid MMI.";
            
} 
}
        
    
}
    
else {
        
cout << "MMI problem.";
    
}
    
    
return 0;

}