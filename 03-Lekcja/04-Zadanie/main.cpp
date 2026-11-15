#include <iostream>

using namespace std;

int main() {
    int grade1, grade2, grade3, grade4, grade5;
    int niedostateczne = 0;

    cout << "input 5 numbers from 1 to 6:" << endl;
    cin >> ocena1 >> ocena2 >> ocena3 >> ocena4 >> ocena5;

    if (grade1 == 1) i++;
    if (grade2 == 1) i++;
    if (grade3 == 1) i++;
    if (grade4 == 1) i++;
    if (grade5 == 1) i++;

    double s = (grade1 + grade2 + grade3 + grade4 + grade5) / 5.0;

    cout << "grade mean: " << s << endl;
    cout << "insufficient grades: " << i << endl;

    return 0;
}
