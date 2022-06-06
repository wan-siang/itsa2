#include    <iostream>

using namespace std;

int main(){
    string ans;
    string input;

    cin >> ans;
    while((cin >> input) && input!="0000"){
        int A=0, B=0;
        //A
        for(int i=0;i<4;i++){
            if(ans[i] == input[i]){
                A++;
            }
        }
        //B
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                if((i!=j) && (ans[i]==input[j])){
                    B++;
                }
            }
        }
        cout<<A<<"A"<<B<<"B"<<endl;
    }
}
