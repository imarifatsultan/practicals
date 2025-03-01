/*
	14.1.6 Write a program involving user defined function to 
	calculate area of circle, triangle and parallelogram.
*/
#include <iostream>
using namespace std;


void Area_Circle(double p, double r);
void Area_Triangle(double l, double b);
void Area_Parallelogram(double s, double h);

int main() {
    double r, l, b, h, s;
    double p = 3.14;
    cout << "Enter the radius of circle: ";
    cin >> r;
    cout << "Enter the length of Triangle: ";
    cin >> l;
    cout << "Enter the breath of Triangle: ";
    cin >> b;
    cout << "Enter the height of parallelogram: ";
    cin >> h;
    cout << "Enter the base of Parallelogram: ";
    cin >> s; 

    Area_Circle(p, r);
    Area_Triangle(l, b);
    Area_Parallelogram(s, h);

    return 0;
}

void Area_Circle(double p, double r) {
    cout << "The Area of the given Circle is: ";
    cout << p * (r * r) << endl;
}

void Area_Triangle(double l, double b) {
    cout << "The area of triangle : ";
    cout << (1.0 / 2.0) * l * b << endl;
}

void Area_Parallelogram(double s, double h) {
    cout << "The area of Parallelogram : " << (s * h) << endl;
}
