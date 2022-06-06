#include    <iostream>
using namespace std;

int main(){
    int table[3][3];
    int number;
    int flag=0;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>number;
            table[i][j]=number;
        }
    }
    for(int i=0;i<3;i++){
        if(table[i][0]==table[i][1] && table[i][1]==table[i][2]){
            flag=1;
            break;
        }
    }
    for(int i=0;i<3;i++){
        if(table[0][i]==table[1][i] && table[1][i]==table[2][i]){
            flag=1;
            break;
        }
    }
    if(table[0][0] == table[1][1] && table[1][1]==table[2][2]){
        flag=1;
    }
    if(table[2][0] == table[1][1] && table[1][1]==table[0][2]){
        flag=1;
    }
    if(flag){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }
}
