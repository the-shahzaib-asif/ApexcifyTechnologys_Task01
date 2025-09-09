#include <iostream>
#include <iomanip>
#include "CGPA.h"
using namespace std;

CGPA::CGPA()
{
    totalCourses = 0;
    totalCredits = 0;
    totalGradePoints = 0;
}

void CGPA::inputCourses()
{
    cout << "Enter number of courses: ";
    cin >> totalCourses;

    for (int i = 1; i <= totalCourses; i++) {
        double grade, credit;
        cout << "\nCourse " << i << ":\n";
        cout << "Enter grade (e.g. 4 for A, 3.5 for B+, etc.): ";
        cin >> grade;
        cout << "Enter credit hours: ";
        cin >> credit;

        totalCredits += credit;
        totalGradePoints += (grade * credit);

        cout << fixed << setprecision(2);
        cout << "GPA for this course: " << calculateGPA(grade, credit) << endl;
    }
}

double CGPA::calculateGPA(double gradePoints, double creditHours)
{
    return gradePoints;
}

double CGPA::calculateCGPA() {
    if (totalCredits == 0) return 0;
    return totalGradePoints / totalCredits;
}

void CGPA::displayResult() {
    cout << "\n===================================\n";
    cout << "Total Credit Hours: " << totalCredits << endl;
    cout << "Overall CGPA: " << fixed << setprecision(2) << calculateCGPA() << endl;
    cout << "===================================\n";
}
