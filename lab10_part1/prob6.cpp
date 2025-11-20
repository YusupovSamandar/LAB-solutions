#include <iostream>

using namespace std;

int main() {
    int a, b;
    
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    
    int *ptr1 = &a;
    int *ptr2 = &b;
    
    int sum = *ptr1 + *ptr2;
    
    cout << "Sum: " << sum << endl;
    
    return 0;
}
