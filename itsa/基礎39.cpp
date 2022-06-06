#include    <iostream>
using namespace std;

int main(){
    int N;
    int score, sixty, eighty, sum;

    cin>>N;
    for(int i = 0; i < N; i++){
        sixty=0;
        eighty=0;
        sum=0;
        for(int j = 0; j < 3; j++){
            cin>>score;
            if(score>=80){
                eighty++;
                sixty++;
            }else if(score>=60){
                sixty++;
            }
            sum += score;
        }
        if((sixty==3) || (sixty==2 && sum>=220)){
            cout<<"P"<<endl;
        }else if((sixty==2 && sum<220) || (sixty==1 && eighty==1)){
            cout<<"M"<<endl;
        }else{
            cout<<"F"<<endl;
        }
    }
}
