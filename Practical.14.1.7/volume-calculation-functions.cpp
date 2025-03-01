/*
	14.1.7 Write a program involving use of user defined 
	function to calculate volume of cylinder, sphere and cube.
*/

#include <iostream>
using namespace std ;

float volumeOfCylinder(){
    float radius ;
    float height ;

    cout <<"\n\nEnter radius of the cylinder : ";
    cin >> radius ;

    cout << "Enter height of the cylinder : ";
    cin >> height ;

    float volume = 3.14 * (radius*radius)*height ;

    cout << "\n\nThe volume of the cylinder is : " << volume ;

}

float volumeOfSphere(){
    float radius ;

    cout <<"\n\nEnter radius of the Sphere : ";
    cin >> radius ;

    float volume = (4/3)*3.14*(radius*radius*radius);

    cout << "\n\nThe volume of the Sphere is : " << volume ;


}

float volumeOfCube(){

    float side ;

    cout << "\n\nEnter the lenght of a side of of the cube : ";
    cin >> side;

    float volume = side*side*side;

    cout << "\n\nThe volume of the cube is : " << volume;


}

int main (){

    int option;

    cout << "Please Select any option : \n\n1. Volume of Cylinder\n2. Volume of Sphere \n3. Volume of cube \n>>> ";
    cin >> option;

    if (option == 1){
        volumeOfCylinder();
    }
    else if (option == 2){
        volumeOfSphere();
    }
    else if (option == 3){
        volumeOfCube();
    }
    else {
        cout << "\n\nError please try again";
    }


    return 0 ;
}
