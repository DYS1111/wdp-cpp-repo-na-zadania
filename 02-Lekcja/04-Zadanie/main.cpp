#include <iostream>

using namespace std;

int main() {

    int total_seconds;
    int minutes;
    int remaining_seconds;


    cout << "Enter seconds: ";
    cin >> total_seconds;

    minutes = total_seconds / 60;
    remaining_seconds = total_seconds % 60;

    cout << total_seconds << " seconds = "
         << minutes << " minutes and "
         << remaining_seconds << " seconds." << endl;

    return 0;
}
