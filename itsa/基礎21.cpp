#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float max, min;
    float number;

    cin >> number;
    max = number;
    min = number;

    //只max&min
    for(int i = 0; i < 9; i++){
        cin >> number;
        if(number > max){
            max = number;
        }else if(min > number){
            min = number;
        }
    }
    //輸出到小數點後兩位
    cout << "maximum:" << fixed << setprecision(2) << max << endl;
    cout << "minimum:" << fixed << setprecision(2) << min << endl;
}
