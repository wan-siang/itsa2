#include    <iostream>
#include    <string>
#include    <cstdlib>
using namespace std;

int main(){
    string line;

    cin>>line;
    int len = line.length();

    for(int i=0;i<len/2;i++){
        if(line[i]!=line[len-1-i]){
            cout<<"NO\n";
            exit(1);
        }
    }
    cout<<"YES\n";
}
