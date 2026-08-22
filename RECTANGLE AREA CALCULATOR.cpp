
/* 

RECTANGLE AREA CALCULATOR 

    Inside main(), complete the following steps:
        1. Declare int variables named length and width, and assign them values
        2. Declare int area and calculate it using length * width
        3. Print the value of area using cout

*/

#include <iostream>
using namespace std;

int main () {

    int length, width, area;

    cout << "Welcome to Kyle's Calculator for the Area of a Rectangle!" << '\n';
    cout << "Rectangle Length: " << '\n'; cin >> length;
    cout << "Rectangle Width: " << '\n'; cin >> width;

    area = (length * width);

    cout << "Thea area of your rectangle is " << area << ".";

return 0;
}


