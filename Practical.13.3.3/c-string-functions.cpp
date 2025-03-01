#include <iostream>
#include <cstring>
using namespace std;
int main() {

	char firstName[10] = "Marifat";
	char lastName[10] = " Sultan";
	char fullName[16];

	int  len;
	strcpy(fullName, firstName);
	cout << "strcpy( fullName, firstName) : " << fullName << endl;

	strcat(firstName, lastName);
	cout << "strcat( firsName, lastName): " << firstName << endl;
	
	len = strlen(firstName); 
	cout << "strlen(firstName) : " << len << endl;
	return 0;
}
