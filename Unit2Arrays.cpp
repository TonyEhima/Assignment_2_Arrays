#include <iostream>
using namespace std;

int main() {
    // Define the dimensions of the 2D array
    const int numStudents = 1; // Only one student
    const int numSubjects = 2; // Two subjects

    // Declare a 2D array to store grades
    int grades[numStudents][numSubjects];

    // Input grades for the student
    cout << "Enter grades for the student:" << endl;
    for (int j = 0; j < numSubjects; j++) {
        cout << "Enter grade for subject " << j+1 << ": ";
        cin >> grades[0][j]; // Input grade for each subject
    }

    // Output the grades
    cout << "\nStudent's Grades:" << endl;
    for (int j = 0; j < numSubjects; j++) {
        cout << "Subject " << j+1 << ": " << grades[0][j] << endl;
    }

    return 0;
}
