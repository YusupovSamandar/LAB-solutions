#include <iostream>

using namespace std;

void reverseArray(int* arr, int size) {
    int *start = arr;
    int *end = arr + size - 1;
    
    while(start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    int arr[5];
    
    cout << "Enter 5 numbers:" << endl;
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    
    reverseArray(arr, 5);
    
    cout << "Reversed array: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
