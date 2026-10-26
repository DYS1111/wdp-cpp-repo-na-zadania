#include <iostream>
#include <iomanip>
using namespace std;
int main() {

    double grade1, grade2, grade3, grade4, grade5;
    double average;


    cout << "input 1: ";
    cin >> grade1;

    cout << "input 2: ";
    cin >> grade2;

    cout << "input 3: ";
    cin >> grade3;

    cout << "input 4: ";
    cin >> grade4;

    cout << "grade 5: ";
    cin >> grade5;

    average = (grade1 + grade2 + grade3 + grade4 + grade5) / 5;
    cout << fixed << setprecision(2);
    cout << "average grade: " << average << endl;

    return 0;
}
