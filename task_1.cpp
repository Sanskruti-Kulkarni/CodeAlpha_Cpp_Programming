#include <iostream>
using namespace std;

int main() {
    int n;
    float credits[10], gradePoints[10];
    float totalCredits = 0, totalPoints = 0;

    cout << "Enter number of courses: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "\nCourse " << i+1 << endl;
        cout << "Enter credits: ";
        cin >> credits[i];
        cout << "Enter grade points: ";
        cin >> gradePoints[i];

        totalCredits += credits[i];
        totalPoints += credits[i] * gradePoints[i];
    }

    float cgpa = totalPoints / totalCredits;

    cout << "\nFinal CGPA: " << cgpa << endl;
    return 0;
}
