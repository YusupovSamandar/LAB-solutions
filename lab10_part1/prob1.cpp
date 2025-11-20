#include <iostream>

using namespace std;

int main() {
    int number;
    
    cout << "Enter a number: ";
    cin >> number;
    
    cout << "Address of variable: " << &number << endl;
    
    return 0;
}
