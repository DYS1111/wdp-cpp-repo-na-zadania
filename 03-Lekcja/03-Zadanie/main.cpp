#include <iostream>

using namespace std;

int main() {
    int a, b;

    cout << "input 1: ";
    cin >> a;

    cout << "input 2: ";
    cin >> b;
    if (b == 0) {
        cout << "cant divide by 0" << endl;
    }
    else if (a % b == 0) {
        cout << "number " << a << " can be divided by " << b << "." << endl;
    }
    else {
        cout << "number " << a << " cant be divided by " << b << "." << endl;
    }

    return 0;
}
