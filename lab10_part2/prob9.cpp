#include <iostream>

using namespace std;

void factorial(int n, int *fact) {
    *fact = 1;
    for(int i = 1; i <= n; i++) {
        *fact *= i;
    }
}

int main() {
    int n, result;
    
    cout << "Enter a number: ";
    cin >> n;
    
    factorial(n, &result);
    
    cout << "Factorial: " << result << endl;
    
    return 0;
}
