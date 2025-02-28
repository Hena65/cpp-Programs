#include <iostream>
using namespace std;
int main() {
 int num;
 cout << "Enter a number: ";
 cin >> num;
 if (num <= 1)
 cout << num << " is not a prime number." << endl;
 else {
 if (num == 2 || num == 3 || num == 5 || num == 7)
 cout << num << " is a prime number." << endl;
 else if (num % 2 == 0 || num % 3 == 0 || num % 5 == 0 || num % 7 == 0)
 cout << num << " is not a prime number." << endl;
 else
 cout << num << " is a prime number." << endl;
 }
 return 0;
}