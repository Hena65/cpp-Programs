#include <iostream>
using namespace std;
// Function definitions
int add(int a, int b) {
 return a + b;
}
int subtract(int a, int b) {
 return a - b;
}
int main() {
 int a, b, choice;
 int (*operation)(int, int); // Function pointer
 cout << "Enter two numbers: ";
 cin >> a >> b;
 cout << "Enter 1 to add or 2 to subtract: ";
 cin >> choice;
 if (choice == 1)
 operation = add;
 else
 operation = subtract;
 cout << "Result: " << operation(a, b) << endl;
 return 0;
}
