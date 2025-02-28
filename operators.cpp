#include <iostream>
using namespace std;
// Function to perform operations
double calculate(int a, int b, char op) {
 if (op == '+') return a + b;
 else if (op == '-') return a - b;
 else if (op == '*') return a * b;
 else if (op == '/') return a / (double)b;
 else return 0; // Invalid operator
}
int main() {
 int num1, num2;
 char op;
 cout << "Enter two integers: ";
 cin >> num1 >> num2;
 cout << "Enter an operator (+, -, *, /): ";
 cin >> op;
 double result = calculate(num1, num2, op);
 cout << "Result: " << result << endl;
 return 0;
}