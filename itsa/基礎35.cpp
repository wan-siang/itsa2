#include    <iostream>
#include    <vector>
#include    <algorithm>

using namespace std;

bool cmp(int a, int b) {
    return a < b;
}
int main(){
    vector<int> list;
    int n;
    int budget, people, item;
    int money;
    int cost;

    cin>>n;

    for(int i = 0; i < n; i++){
        cin>>budget>>people>>item;
        for(int j = 0; j < item; j++){
            cin>>money;
            list.push_back(money);
        }
        sort(list.begin(), list.end(), cmp);
        cost=0;
        for(int j = 0; j < people; j++){
            cost += list[j];
        }
        if(cost>budget){
            cout<<"Impossible"<<endl;
        }else{
            cout<<cost<<endl;
        }
        list.clear();
    }
}
