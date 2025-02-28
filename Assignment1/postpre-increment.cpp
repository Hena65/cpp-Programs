#include <iostream>
using namespace std;
int main() {
 int i = 5, preIncrement, postIncrement;
 preIncrement = ++i; // First increment, then assign
 cout << "After pre-increment (++i): " << preIncrement << endl;
 postIncrement = i++; // First assign, then increment
 cout << "After post-increment (i++): " << postIncrement << endl;
 cout << "Final value of i: " << i << endl;
 return 0;
}
