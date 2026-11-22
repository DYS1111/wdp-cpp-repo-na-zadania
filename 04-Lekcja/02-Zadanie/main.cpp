#include <iostream>

using namespace std;

int main()
{
int n; cin >> n; int sum=0; int mean=0;
for(int c = 0; c < n; c++){
    int x; cin >> x;
    sum += x;
    mean += x;
}
    mean = mean / n;
    cout << "sum: " << sum << " mean: "<< mean;
    return 0;
}
