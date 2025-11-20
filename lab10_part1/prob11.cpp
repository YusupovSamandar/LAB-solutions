#include <iostream>

using namespace std;

int main() {
    int *p1, *p2, *p3, i, j, sum;
    
    p1 = &i;
    p2 = &j;
    p3 = &sum;
    
    do {
        cout << "Enter number";
        cin >> *p1;
    } while(*p1 >= 100);
    
    do {
        cout << "Enter second number (less than 100 and greater than first): ";
        cin >> *p2;
    } while(*p2 >= 100 || *p2 <= *p1);
    
    *p3 = 0;
    
    for(int k = *p1 + 1; k < *p2; k++) {
        *p3 += k;
    }

    cout << "Sum: " << *p3 << endl;
    
    return 0;
}
