#include    <iostream>
#include    <string>

using namespace std;

void encrpt(string line, int n){
    int len = line.length();

    for(int i = 0; i < len; i++){
        if('A'<=line[i] && line[i]<='Z'){
            if('A'<=(line[i]+n) && (line[i]+n)<='Z'){
                line[i] += n;
            }else if((line[i]+n)<'A'){
                line[i] = (line[i]+n)- 'A' + 'Z' + 1;
            }else{
                line[i] = (line[i]+n)- 'Z' + 'A' - 1;
            }
        }else if('a'<=line[i] && line[i]<='z'){
            if('a'<=(line[i]+n) && (line[i]+n)<='z'){
                line[i] += n;
            }else if((line[i]+n)<'a'){
                line[i] = (line[i]+n)- 'a' + 'z' + 1;
            }else{
                line[i] = (line[i]+n)- 'z' + 'a' - 1;
            }
        }else if('0'<=line[i] && line[i]<='9'){
            if('0'<=(line[i]+n) && (line[i]+n)<='9'){
                line[i] = line[i] + n;
            }else if((line[i]+n)<'0'){
                line[i] = (line[i]+n) -'0' + '9' + 1;
            }else{
                line[i] = (line[i]+n) -'9' + '0' - 1;
            }
        }
    }
    cout<<line<<endl;
}
int main(){
    string line;
    int N;

    getline(cin, line);
    cin>>N;
    encrpt(line, N);
}
