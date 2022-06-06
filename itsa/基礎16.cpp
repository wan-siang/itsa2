#include    <iostream>

using namespace std;

int main(){
    string str, subStr;
    int pos = 0;
    int cnt = 0;

    cin>>subStr;
    cin>>str;

    while(1){
        pos = str.find(subStr, pos);
        if(pos!=string::npos){
            pos++;
            cnt++;
        }else{
            break;
        }
    }
    cout<<cnt<<endl;
}
