#include    <iostream>

using namespace std;

int main(){
    string str, subStr;
    int pos = 0;
    int cnt = 0;

    cin >> subStr;  
    cin >> str;
    //找出subStr在str出現的次數
    while(1){
        pos = str.find(subStr, pos);
        if(pos != string::npos){    //如果還沒讀到結束位置
            pos++;
            cnt++;
        }else{
            break;
        }
    }
    cout<<cnt<<endl;
}
