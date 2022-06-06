#include    <iostream>

using namespace std;

void tobin(int N, int arr[]){
    int i = 0;
    while(N){
        if(N % 2){
            arr[i] = 1;
        }
        N = N / 2;
        i++;
    }
}

void complements(int arr[]){
    for(int i = 0; i < 8; i++){
        if(arr[i]){
            arr[i] = 0;
        }else{
            arr[i] = 1;
        }
    }
    arr[0] +=1;
    for(int i = 0; i < 8; i++){
        if(arr[i] == 2){
            arr[i] = 0;
            arr[i+1] += 1;
        }
    }
}
int main(){
    int N;
    int binary[8];
    int i;

    for(i = 0; i < 8; i++) binary[i] = 0;

    cin >> N;
    if(N >= 0){
        tobin(N , binary);
    }else{
        N = N * (-1);
        tobin(N, binary);
        complements( binary);
    }
    for(i = 7; i >= 0; i--){
        cout<<binary[i];
    }
    cout<<endl;




}
