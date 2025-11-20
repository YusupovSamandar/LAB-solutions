#include <iostream>

using namespace std;

void findMinMax(const int* arr, int size, int& minVal, int& maxVal) {
    minVal = *arr;
    maxVal = *arr;
    
    for(int i = 1; i < size; i++) {
        if(*(arr + i) < minVal) {
            minVal = *(arr + i);
        }
        if(*(arr + i) > maxVal) {
            maxVal = *(arr + i);
        }
    }
}

int main() {
    int arr[5];
    int min, max;
    
    cout << "Enter 5 numbers:" << endl;
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    
    findMinMax(arr, 5, min, max);
    
    cout << "Minimum: " << min << endl;
    cout << "Maximum: " << max << endl;
    
    return 0;
}
