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
    
    int min = *ptr1;
    
    if(*ptr2 < min) {
        min = *ptr2;
    }
    if(*ptr3 < min) {
        min = *ptr3;
    }
    
    cout << "Minimum: " << min << endl;
    
    return 0;
}
