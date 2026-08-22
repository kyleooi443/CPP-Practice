
/*

Calculate the Total Cost of an Item

Inside main(), complete the following steps:

    1. Declare two int variables named itemPrice and shippingCost, and assign them values
    2. Create an int variable named sum
    3. Calculate the total cost by adding itemPrice and shippingCost (store the result in sum)
    4. Print the total cost using cout

*/


#include <iostream>
using namespace std;


int main () {
    
    // Define Variables
    int itemPrice, shippingCost, sum;

    // Print Text and Input
    cout << "Item Price: " << '\n'; cin >> itemPrice; 
    cout << "Shipping Cost: " << '\n'; cin >> shippingCost;

    sum = itemPrice + shippingCost;

    // Print the total cost
    cout << " The total Cost of your item is " << sum << " Dollars.";

return 0;
}