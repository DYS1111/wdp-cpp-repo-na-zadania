#include <iostream>

using namespace std;

int main()
{
int n; cin >> n; int suma=0;
for(int c = 0; c < n + 1; c++){
    suma += c;
}
cout << suma;
return 0;
}
