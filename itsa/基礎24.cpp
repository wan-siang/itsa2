#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long double r, n, p;
    cin >> r >> n >> p;
    double money = 0.0;
    r += 1.0;

    for(int i = 0; i < n; ++i){
        money += p*pow(r, n-i);
    }
    cout << (long long)money << endl;

    return 0;
}
