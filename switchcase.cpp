
/*

    FIX CUSTOMER ORDER CHALLENGE

    Instructions:

    A customer wants to order Coffee.

    1. The code in the editor is incomplete. Fix it by inserting the missing values so the program prints the correct order.
    2. Change choice to the correct number for Coffee (see the comments).
    3. Insert choice inside switch().
    4. Replace each case: with the correct number based on the comments above.
    5. Move cout << "Invalid choice" into a default: case.

*/

#include <iostream>
using namespace std;

int main () {

    int choice = 3;

    // 1 = americano 2 = latte 3 = fruit tea

    switch (choice) {
        case 1: 
            cout << "You ordered Americano";
            break;
        case 2: 
            cout << "You ordered Latte";
            break;
        case 3:
            cout << "You ordered Fruit tea";
            break;
        default:
            cout << "Please state your order";
    }

    return 0;
}
