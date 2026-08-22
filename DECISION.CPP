
/* 
        CONDITIONS CODE CHALLENGE
        DECISION WITH IF AND ELSE

        Instructions
            1. Inside main(), complete the following steps:
            2. Declare an int variable named age and assign it a value
            3. Use an if statement with the >= operator to check if age is 18 or older
            4. If the condition is true, print Allowed
            5. Otherwise, print Not allowed




*/

#include <iostream>
using namespace std;

int main () {

    int age = 18;
    bool isCitizen = true;

    if (age >=18) { 
        cout << "Allowed";
        if (isCitizen) {
            cout << "You are a citizen, you can vote.";
        }
        else {
            cout << "You are not a citizen, you cant vote.";
        }
    }
    else {
        cout << "Not Allowed";
    }

    return 0;
}
