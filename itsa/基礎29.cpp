#include    <iostream>
#include    <string>

using namespace std;

int main(){
    string ID;
    char ch[26] = {'A','B','C','D','E','F','G','H','J','K','L','M','N','P','Q','R','S','T','U','V','X','Y','W','Z','I','O'};
    int ones, tens;
    int sum = 0;
    int num[10];

    cin >> ID;
    for(int i = 0; i < 26; i++){
        if(ch[i]==ID[0]){
            i += 10;
            ones = i % 10;
            tens = i / 10;
            break;
        }
    }
    sum = tens;
    num[0] = ones;

    for(int i = 1; i < 10; i++){
        num[i] = ID[i] - '0';
    }

    for(int i = 0; i < 9; i++){
        sum += (9-i)*num[i];
    }
    sum += num[9];

    if((sum%10)==0){
        cout<<"CORRECT!!!"<<endl;
    }else{
        cout<<"WRONG!!!"<<endl;
    }
}
}
