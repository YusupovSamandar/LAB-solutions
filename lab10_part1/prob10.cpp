#include <iostream>

using namespace std;

int main() {
    int temps[31];
    int searchTemp;
    int *ptr;
    
    cout << "Enter temperatures for January:" << endl;
    for(int i = 0; i < 31; i++) {
        cout << "Day " << i + 1 << ": ";
        cin >> temps[i];
    }
    
    cout << "Enter temperature to search: ";
    cin >> searchTemp;
    
    ptr = temps;
    
    for(int i = 0; i < 31; i++) {
        if(*(ptr + i) < searchTemp) {
            cout << "First day with temperature less than " << searchTemp << " is day " << i + 1 << endl;
            return 0;
        }
    }
    
    cout << "No day found with temperature less than " << searchTemp << endl;
    
    return 0;
}
