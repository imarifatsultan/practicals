/*
	14.1.8 Write a program involving user defined function 
	to calculate average of numbers.
*/

#include <iostream>
using namespace std;

double averageCal(int numbers[], int n);

int main(){
	double average;
	int n;
	cout << "Enter the number of elements : ";
	cin >> n;
	
	int numbers[n];
	for (int i = 0; i < n; ++i){
		cout << "Enter " << i << " element : ";
		cin >> numbers[i];
	}
	
	average = averageCal(numbers, n);
	
	cout << "\nThe average of the numbers is : " << average;
	
	return 0;
}

double averageCal(int numbers[], int n){
	double sum = 0;
	double average;
	
	for (int i = 0; i < n; ++i){
		sum += numbers[i];
	}
	
	average = sum/n;
	
	return average;
}
