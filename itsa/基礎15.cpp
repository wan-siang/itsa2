#include    <iostream>
#include    <string>

using namespace std;

int main(){
    string str;
    int arr[26];
    int pos;
    int word_cnt=0;
    char c;

    for(int i=0;i<26;i++){
        arr[i]=0;
    }

    getline(cin, str);
    int len = str.length();

    for(int i=0;i<len;i++){
        if(str[i]==' '){
            word_cnt++;
        }else if('A'<=str[i] && str[i]<='Z'){
            pos = str[i] - 'A';
            arr[pos]++;
        }else{
            pos = str[i] - 'a';
            arr[pos]++;
        }
    }

    cout<<word_cnt+1<<endl;
    for(int i=0;i<26;i++){
        if(arr[i]){
            c = 'a' + i;
            cout<<c<<" : "<<arr[i]<<endl;
        }
    }
}
