#include    <iostream>
#include    <vector>

using namespace std;

void add(int r1, int i1, int r2, int i2);
void sub(int r1, int i1, int r2, int i2);
void mul (int r1, int i1, int r2, int i2);

int main(){
    int n;
    int r1, r2, i1, i2; //r: ¹ê³¡, i: µê³¡
    char op;

    cin >> n;
    for(int i=0;i<n;i++){
        cin >> op >> r1 >> i1 >> r2 >> i2;
        if(op == '+'){
            add(r1, i1, r2, i2);
        }else if(op == '-'){
            sub(r1, i1, r2, i2);
        }else{
            mul(r1, i1, r2, i2);
        }
    }

}

void add(int r1, int i1, int r2, int i2){
    cout << (r1+r2) << " " << (i1+i2) << endl;
}

void sub(int r1, int i1, int r2, int i2){
    cout << (r1-r2) << " " << (i1-i2) << endl;
}

void mul (int r1, int i1, int r2, int i2){
    cout << (r1*r2 - i1*i2) << " ";
    cout << (i1*r2 + i2*r1) << endl;
}
