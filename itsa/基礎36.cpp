#include    <iostream>
using namespace std;

int main(){
    int year;

    cin >> year;

    if(year%4){
        cout << "Common Year" << endl;
    }else{
        if(year%100){
            cout << "Bissextile Year" << endl;
        }else{
            if(year%400){
                cout << "Common Year" << endl;
            }else{
                cout << "Bissextile Year" << endl;
            }
        }
    }
}
