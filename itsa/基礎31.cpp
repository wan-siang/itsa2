#include    <iostream>
#include    <string>
#include    <sstream>
#include    <vector>

using namespace std;

class info{
    public:
        int number;
        int cnt;
};

int main(){
	string str;
    int total;
    vector<info> list;
    info tmp;
    int num, i;

	while (getline(cin,str)){
		stringstream ss(str);   //«Øºcªì©l¤Æ
		total = 0;

		while (ss >> num){
		    total++;
			for(i = 0; i < list.size(); i++){
			    if(num == list[i].number){
			        list[i].cnt++;
			        break;
			    }
			}
			if(i == list.size()){
			    tmp.number = num;
			    tmp.cnt = 1;
			    list.push_back(tmp);
			}
		}

		for(i = 0; i < list.size(); i++){
		    if(list[i].cnt > (total/2)){
		        cout<<list[i].number<<endl;
		        break;
		    }
		}
		if(i == list.size()){
		    cout<<"NO"<<endl;
		}
		list.clear();
	}
	return 0;
}
