#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter third number: ";
    cin >> c;
    
    int *ptr1 = &a;
    int *ptr2 = &b;
    int *ptr3 = &c;
    
    int max = *ptr1;
    
    if(*ptr2 > max) {
        max = *ptr2;
    }
    if(*ptr3 > max) {
        max = *ptr3;
    }
    
    cout << "Maximum: " << max << endl;
    
    return 0;
}
