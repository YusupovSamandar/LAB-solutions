#include <iostream>

using namespace std;

int main() {
    int arr[10] = {5, 12, 7, 23, 9, 15, 3, 18, 6, 11};
    int *ptrA = arr;
    
    for(int i = 0; i < 10; i++) {
        cout << "Address: " << (ptrA + i) << " Value: " << *(ptrA + i) << endl;
    }
    
    return 0;
}
