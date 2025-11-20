#include <iostream>

using namespace std;

int main() {
    int number;
    
    cout << "Enter a number: ";
    cin >> number;
    
    int *ptr = &number;
    
    cout << *ptr << endl;
    
    return 0;
}
