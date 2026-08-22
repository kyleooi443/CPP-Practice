#include <iostream>
using namespace std;

int main () {

char grade = 'F';

    switch (grade) {
        case 'A':
            cout << "Excellent!" << endl;
            break;
        case 'B':
            cout << "Good job!" << endl;
            break;
        case 'C':
            cout << "You can do better." << endl;
            break;
        default:
            cout << "Invalid grade." << endl;
            break;
    }

    return 0;
}