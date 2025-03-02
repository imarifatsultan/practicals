/*
	16.1.6 Write a C++ program in which a class uses both 
	public and private access specifiers.
*/

#include <iostream>
using namespace std;

class employee {
private:
    string name;
    int age;
    double salary;

public:
    employee(string n, int a, double s) {
        name = n;
        age = a;
        salary = s;
    }

    void displayInfo();
    void setSalary(double newSalary);
    double getSalary();
};

int main() {
	string name;
	int age;
	int salary;
	cout << "Enter your name : ";
	getline(cin, name);
	cout << "Enter your age : ";
	cin >> age;
	cout << "Enter your salary : ";
	cin >> salary;
	
    employee emp(name, age, salary);

    emp.displayInfo();
    emp.setSalary(salary);

    cout << "Updated Salary: " << emp.getSalary() << "$" << endl;

    return 0;
}

void employee::displayInfo() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee Age: " << age << endl;
        cout << "Employee Salary: " << salary << "$" << endl;
}

void employee::setSalary(double newSalary) {
        if (newSalary > 0) {
            salary = newSalary;
        } else {
            cout << "Salary must be greater than zero!" << endl;
        }
}
double employee::getSalary(){
        return salary;
}

