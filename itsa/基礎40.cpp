#include    <iostream>

using namespace std;


int main(){
    int ISBN[10];
    char c;

    for(int i = 0; i < 10; i++){
        cin>>c;
        if(c=='X'){
            ISBN[i] = 10;
        }else{
            ISBN[i] = c - '0';
        }
    }

    //�Ĥ@���֥[
    for(int i = 0; i < 9; i++){
        ISBN[i+1] = ISBN[i] + ISBN[i+1];
    }

    //�ĤG���֥[
    for(int i = 0; i < 9; i++){
        ISBN[i+1] = ISBN[i] + ISBN[i+1];
    }

    if((ISBN[9]%11)==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
