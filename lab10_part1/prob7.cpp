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
    
    int product = *ptr1 * *ptr2;
    
    cout << "Product: " << product << endl;
    
    return 0;
}
