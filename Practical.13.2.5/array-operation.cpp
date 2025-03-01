/*
	13.2.5 Write a C++ program for 
	adding/ subtracting/ multiplying 
	two integer matrices of the order up to 4x4.
*/

#include <iostream>
using namespace std;

const int MAX = 4; 

void inputMatrix(int matrix[MAX][MAX], int rows, int cols) {
    
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
        	cout << "Enter matrix element " << i << j << " : ";
            cin >> matrix[i][j];
        }
    }
}

void displayMatrix(int matrix[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void addMatrices(int result[MAX][MAX], int matrix1[MAX][MAX], int matrix2[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void subtractMatrices(int result[MAX][MAX], int matrix1[MAX][MAX], int matrix2[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

void multiplyMatrices(int result[MAX][MAX], int matrix1[MAX][MAX], int matrix2[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < cols; ++k) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main() {
    int matrix1[MAX][MAX], matrix2[MAX][MAX], result[MAX][MAX];
    int rows, cols;

    cout << "Select order of Matrix (max 4x4): \n\n" + "Enter number of rows : ";
    cin >> rows;
    cout << "Enter number of columns : ";
    cin >> cols;

    if (rows > MAX || cols > MAX) {
        cout << "Matrix size exceeds 4x4 limit......!" << endl;
        return -1;
    }
	else{	
    cout << "\nInput first matrix1\n\n";
    inputMatrix(matrix1, rows, cols);
    cout << "Input second matrix\n\n";
    inputMatrix(matrix2, rows, cols);

    addMatrices(result, matrix1, matrix2, rows, cols);
    cout << "\nSum of matrices:" << endl;
    displayMatrix(result, rows, cols);

    subtractMatrices(result, matrix1, matrix2, rows, cols);
    cout << "\nDifference of matrices:" << endl;
    displayMatrix(result, rows, cols);

    multiplyMatrices(result, matrix1, matrix2, rows, cols);
    cout << "\nProduct of matrices:" << endl;
    displayMatrix(result, rows, cols);
    
	}

    return 0;
}

