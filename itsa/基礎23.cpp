#include    <iostream>
using namespace std;

char *getword(char *line, char *word);
int str_to_int(char *line);

int main(){
    int N, a1, a2, a3;
    char line[20];
    char word[20];
    char *ptr;
    int cost, charge;
    int one, five, fifty;

    cin>>line;
    ptr = line;

    ptr = getword(ptr,word);
    N = str_to_int(word);

    ptr = getword(ptr,word);
    a1 = str_to_int(word);

    ptr = getword(ptr,word);
    a2 = str_to_int(word);

    ptr = getword(ptr,word);
    a3 = str_to_int(word);

    cost = a1 * 15 + a2 * 20 + a3 * 30;

    if(cost > N){
       cout<<"0"<<endl;
        exit(0);
    }
    charge = N - cost;
    fifty = charge / 50;
    five = (charge-50*fifty) / 5;
    one = (charge-50*fifty-5*five);
    cout<<one<<","<<five<<","<<fifty<<endl;
}

int str_to_int(char *line){
    int num=0;
    int i=0;
    while(line[i]!='\0'){
        num = num * 10 + (line[i]-'0');
        i++;
    }
    return num;
}

char *getword(char *line, char *word){
    char *ptr = line;
    char *qtr = word;

    while(!('0'<=*ptr && *ptr<='9')) ptr++;
    while('0'<=*ptr && *ptr<='9') *qtr++=*ptr++;
    *qtr='\0';
    if(qtr-word==0){
        return NULL;
    }
    return ptr;
}
