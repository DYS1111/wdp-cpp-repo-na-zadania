#include <iostream>

using namespace std;

int main()
{
int x; int mi=0; int ma=0; int sum; int mean; int n = 0;
while(true){
    cin >> x;
    if(x == 0){break;}
    n++;
    sum += x;
    mean += x;
    if(x < mi){mi = x;}
    if(x > ma){ma = x;}
}
mean = mean / n;
cout << "sum: " << sum << " minimum: " << mi << " maximum: " << ma << " mean: " << mean;
return 0;
}
