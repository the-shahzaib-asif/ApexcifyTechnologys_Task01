#ifndef CGPA_CALCULATOR_H
#define CGPA_CALCULATOR_H



class CGPA {
private:
    int totalCourses;
    double totalCredits;
    double totalGradePoints;

public:
    CGPA();  

    void inputCourses();
    double calculateGPA(double gradePoints, double creditHours);
    double calculateCGPA();
    void displayResult();
};




#endif
