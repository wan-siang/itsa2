#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int mile;
    double km;

    cin >> mile;
    km = mile*1.6;
    cout << fixed << setprecision(1) << km << endl;

}
