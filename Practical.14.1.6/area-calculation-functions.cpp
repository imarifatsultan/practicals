/*
	14.1.6 Write a program involving user defined function to 
	calculate area of circle, triangle and parallelogram.
*/
#include <iostream>
using namespace std;


void areaOfCircle(double pi, double radius);
void areaOfTriangle(double length, double breath);
void areaOfParallelogram(double width, double height);

int main() {
    double radius, length, breath, height, width;
    double pi = 3.14;
    cout << "Enter the radius of circle: ";
    cin >> radius;
    cout << "Enter the length of Triangle: ";
    cin >> length;
    cout << "Enter the breath of Triangle: ";
    cin >> breath;
    cout << "Enter the height of parallelogram: ";
    cin >> height;
    cout << "Enter the base of Parallelogram: ";
    cin >> width; 
	
	cout << "\n\n";
    areaOfCircle(pi, radius);
    areaOfTriangle(length, breath);
    areaOfParallelogram(width, height);

    return 0;
}

void areaOfCircle(double pi, double radius) {
    cout << "The area of the Circle is : ";
    cout << pi * (radius * radius) << endl;
}

void areaOfTriangle(double length, double breath) {
    cout << "The area of triangle is : ";
    cout << (1.0 / 2.0) * length * breath << endl;
}

void areaOfParallelogram(double width, double height) {
    cout << "The area of Parallelogram is : " << (width * height) << endl;
}
