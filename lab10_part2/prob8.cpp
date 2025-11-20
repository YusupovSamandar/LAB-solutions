#include <iostream>

using namespace std;

int cstrLength(char* c) {
    int length = 0;
    while(*c != '\0') {
        length++;
        c++;
    }
    return length;
}

int main() {
    char str[100];
    
    cout << "Enter a string: ";
    cin.getline(str, 100);
    
    int length = cstrLength(str);
    
    cout << "Length: " << length << endl;
    
    return 0;
}
