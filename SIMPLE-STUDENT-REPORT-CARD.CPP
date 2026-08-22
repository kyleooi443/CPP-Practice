
/* 

CREATE A STUDENT REPORT CARD

    Inside main(), complete the following steps:

        1. Declare an int named studentID and assign it a value
        2. Declare a float (or double) named score and assign it a value (use a decimal)
        3. Declare a char named grade and assign it a single character (in single quotes)
        4. Print all three values using cout

*/



#include <iostream>
using namespace std;

int main () {

    // Assign 
    int studentId = 2608026;
    int quiz, activity, exam;
    double score;
    char A, B, F;

    cout << "Quiz score: " << '\n'; cin >> quiz;
    cout << "Activity score: " << '\n'; cin >> activity;
    cout << "Exam score: " << '\n'; cin >> exam;

    score = (quiz + activity + exam) / 3;


return 0;

}

