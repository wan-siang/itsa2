#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int height, gender;
    double standard;

    while(cin >> height >> gender){
        if(gender==1){
            standard = (double)(height - 80) * 0.7;
        }else{
            standard = (double)(height - 70) * 0.6;
        }
        cout << fixed << setprecision(1) << standard << endl;
    }
}
