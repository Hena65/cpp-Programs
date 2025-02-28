#include<iostream>
#include <cmath>
using namespace std;
int main() {
 double a, b, c, d, e;
 cout << "Enter values for a, b, c, d, e: ";
 cin >> a >> b >> c >> d >> e;
 double result = pow((a + b * c - d / e), 2);
 cout << "Result: " << result << endl;
 return 0;
}