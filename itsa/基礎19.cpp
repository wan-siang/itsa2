#include    <iostream>

using namespace std;

int main(){
    int n;
    int st, dt; //出發時間, 返回時間
    int time_list[25];

    for(int i = 0; i < 25; i++){
        time_list[i] = 0;
    }

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> st >> dt;
        for(int j = st; j < dt; j++){
            time_list[j]++;  //+1:現在要用車
        }
    }
    //time_list[j]->表示j時間需要的最大派車數
    int max = time_list[0];
    for(int i = 1; i < 25; i++){
        if(time_list[i] > max){
            max = time_list[i];
        }
    }
    cout << max << endl;
}
