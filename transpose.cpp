#include <iostream>
using namespace std;
int main() {
 int matrix[3][3], transpose[3][3];
 cout << "Enter elements of the 3x3 matrix: " << endl;
 for (int i = 0; i < 3; i++)
 for (int j = 0; j < 3; j++)
 cin >> matrix[i][j];
 // Computing transpose
 for (int i = 0; i < 3; i++)
 for (int j = 0; j < 3; j++)
 transpose[j][i] = matrix[i][j];
 cout << "Transpose of the matrix: " << endl;
 for (int i = 0; i < 3; i++) {
 for (int j = 0; j < 3; j++)
 cout << transpose[i][j] << " ";
 cout << endl;
 }
 return 0;
}
