#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int N;
    double summer = 0;
    double non_summer = 0;

    cin >> N;
    if(N <= 120){
        summer += N*2.1;
        non_summer += N*2.1;
    }else{
        summer += 120*2.1;
        non_summer += 120*2.1;
        if(N<=330){
            summer += (N-120)*3.02;
            non_summer += (N-120)*2.68;
        }else{
            summer += 210*3.02;
            non_summer += 210*2.68;
            if(N<=500){
                summer += (N-330)*4.39;
                non_summer += (N-330)*3.61;
            }else{
                summer += 170*4.39;
                non_summer += 170*3.61;
                if(N<=700){
                    summer += (N-500)*4.97;
                    non_summer += (N-500)*4.01;
                }else{
                    summer += 200*4.97 + (N-700)*5.63;
                    non_summer += 200*4.01 + (N-700)*4.5;

                }
            }
        }
    }
    cout << "Summer months:" << fixed << setprecision(2) << summer << endl;
    cout << "Non-Summer months:" << fixed <<setprecision(2) << non_summer <<endl;
}
