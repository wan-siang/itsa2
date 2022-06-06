#include    <iostream>
#include    <string>
#include    <sstream>
#include    <vector>
#include    <iomanip>

using namespace std;

class info{
    public:
        int number;
        int cnt;
};

int main(){
	string str;
    int total;
    int num, sum, i;
    double average;

	while (getline(cin,str)){
		stringstream ss(str);   //«Øºcªì©l¤Æ
		total = 0;
	    sum = 0;
		while (ss >> num){
		    total++;
			sum += num;
		}

		average = ((double)sum)/total;
		cout<<"Size: "<<total<<endl;
		cout << "Average: "<<fixed<<setprecision(3)<<average<<endl;
	}
	return 0;
}
