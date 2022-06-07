#include    <iostream>
#include    <algorithm>

using namespace std;

int main(){
    int p[4];
    int same[3]={0,0,0};
    int cnt=0;

    cin >> p[0] >> p[1] >> p[2] >> p[3];
    sort(p, p+4);

    if((p[0]==p[1]) && (p[0]==p[2]) && (p[0]==p[3])){   //通殺
        cout << "WIN"<<endl;
    }else if((p[0]!=p[1]) && (p[0]!=p[2]) && p[0]!=p[3]){
        cout << "R"<<endl;
    }else{
        if(p[0]==p[1]){
            same[0]=1;
            cnt++;
        }
        if(p[1]==p[2]){
            same[1]=1;
            cnt++;
        }
        if(p[2]==p[3]){
            same[2]=1;
        }
        if(cnt==1){ //一組相同 -> 另外兩個相加
            if(same[0]){
                cout << (p[2]+p[3]) << endl;
            }else if(same[1]){
                cout << (p[0]+p[3]) << endl;
            }else{
                cout << (p[0]+p[1]) << endl;
            }
        }else if(cnt==2){   //兩組相同
            if(same[0] && same[1]){ //三個相同
                cout << "R" << endl;
            }else if(same[1] && same[2]){   //三個相同
                cout << "R" << endl;
            }else{
                if(p[0]>p[2]){
                    cout << (p[0]+p[1]) << endl;
                }else{
                    cout << (p[2]+p[3]) << endl;
                }
            }
        }
    }
}
