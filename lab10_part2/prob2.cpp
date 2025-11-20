#include <iostream>

using namespace std;

void swapNums(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;
    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    cout << "Before swap: " << num1 << " " << num2 << endl;
    
    swapNums(&num1, &num2);
    
    cout << "After swap: " << num1 << " " << num2 << endl;
    
    return 0;
}
