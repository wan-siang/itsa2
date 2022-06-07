#include    <iostream>
#include    <string>

using namespace std;

int main(){
    string str;
    int arr[26];    //idx:0~25 -> alphabet: a~z, 存字母出現個數
    int pos;
    int word_cnt = 0;
    char c;
    
    //初始化
    for(int i = 0; i < 26; i++){
        arr[i] = 0;
    }

    getline(cin, str);
    int len = str.length();

    for(int i = 0; i < len; i++){
        if(str[i] == ' '){
            word_cnt++; //字數=空格數+1
        }else if('A' <= str[i] && str[i] <= 'Z'){
            pos = str[i] - 'A';
            arr[pos]++;
        }else{
            pos = str[i] - 'a';
            arr[pos]++;
        }
    }

    cout<<word_cnt+1<<endl;
    //輸出字母出現次數
    for(int i = 0; i < 26; i++){
        if(arr[i]){
            c = 'a' + i;
            cout<<c<<" : "<<arr[i]<<endl;
        }
    }
}
