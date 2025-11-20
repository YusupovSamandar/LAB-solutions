#include <iostream>

using namespace std;

int main() {
    int a, b;
    
    cout << "Enter value for a: ";
    cin >> a;
    cout << "Enter value for b: ";
    cin >> b;
    
    int *ptrA = &a;
    int *ptrB = &b;
    
    cout << "Value of ptrA: " << *ptrA << endl;
    cout << "Value of ptrB: " << *ptrB << endl;
    
    return 0;
}
