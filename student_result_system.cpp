#include <iostream>
using namespace std;

int main() {
    string name;
    int rollNo;
    int marks1, marks2, marks3;
    int total;
    float percentage;

    cout << "Enter Student Name: ";
    getline(cin, name);

    cout << "Enter Roll Number: ";
    cin >> rollNo;

    cout << "Enter Marks of 3 Subjects: ";
    cin >> marks1 >> marks2 >> marks3;

    total = marks1 + marks2 + marks3;
    percentage = total / 3.0;

    cout << "\n----- RESULT -----\n";
    cout << "Name: " << name << endl;
    cout << "Roll No: " << rollNo << endl;
    cout << "Total Marks: " << total << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    if (percentage >= 40)
        cout << "Result: PASS 🎉";
    else
        cout << "Result: FAIL ❌";

    return 0;
}