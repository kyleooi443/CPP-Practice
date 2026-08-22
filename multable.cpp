
#include <iostream>
using namespace std;

// int main () {

//     int n;
//     cout << "Enter a Number: "; cin >> n;

//     for (int i = 1; i<=10; i+=1) {
//         cout << n << " x " << i << " = " << n * i << endl;

//     }

// return 0;
// }


/*
int main () {

    int a, num, sum = 0;

    cout << "Enter numbers to add (enter 0 to stop)"; cin >> num;


    while ( num != sum ) {
        a = num + sum;

        if (num = sum) {
            cout << sum;
        }
    }




    return 0;
}
*/


// int main () {

//     int num, sum = 0;

//         cout << "Enter numbers to add (enter 0 to stop)"; cin >> num;

        
//         while (num != 0) {
//         sum += num;
//         cout <<"Enter numbers to add: "; cin >> num;
//     }
//     cout << "The final sum is: " << sum;
//     return 0;
// }



int main () {

        int number;
        cout << "Type the number: "; 

        do {
            cin >> number;
            if (number == 1) {
                cout << "Hello!" << endl;
            }
            else if (number == 2) {
                cout << "Goodbye!" << endl;
            }
            else if (number == 3) {
                cout << "Exiting..." << endl;
            }
            else {
                cout << "Invalid" << endl;
            }
        }
        while (number != 3);
            
    return 0;
}