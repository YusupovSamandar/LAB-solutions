#include <iostream>

using namespace std;

int findLargestElement(const int* arr, int size) {
    int largest = *arr;
    
    for(int i = 1; i < size; i++) {
        if(*(arr + i) > largest) {
            largest = *(arr + i);
        }
    }
    
    return largest;
}

int main() {
    int arr[5];
    
    cout << "Enter 5 numbers:" << endl;
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    
    int largest = findLargestElement(arr, 5);
    
    cout << "Largest element: " << largest << endl;
    
    return 0;
}
