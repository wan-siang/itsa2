#include    <iostream>

using namespace std;

int main(){
    int n;
    int st, dt; //�X�o�ɶ�, ��^�ɶ�
    int time_list[25];

    for(int i=0;i<25;i++){
        time_list[i]=0;
    }

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>st>>dt;
        for(int j=st;j<dt;j++){
            time_list[j]++;  //1:�{�b�n�Ψ�
        }
    }

    int max = time_list[0];
    for(int i=1;i<25;i++){
        if(time_list[i]>max){
            max = time_list[i];
        }
    }
    cout<<max<<endl;
}
