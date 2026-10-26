#include <iostream>

using namespace std;

int main()
{
    cout << "input 3 numbers: " << endl;
    int x; cin >> x;
    int y; cin >> y;
    int z; cin >> z;
    int suma = x + y + z;
    int dif = x - y;
    float n = x / z;
    int multi = y * z;

    cout << "sum = " << x << endl << "dif = " << dif << endl << "product = " << n << endl << "multi = " << multi;


    return 0;
}
