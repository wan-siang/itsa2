#include    <iostream>
#include    <vector>
#include    <algorithm>

using namespace std;

class pairs{
    public:
        int num;
        int sum;
};

int digit_sum(int num){
    int sum = 0;

    while(num){
        sum += (num%10);
        num /= 10;
    }
    return sum;
}

bool cmp(pairs a, pairs b) {
    if(a.sum == b.sum){
        return a.num < b.num;
    }
    return a.sum < b.sum;
}

int main(){
    vector<pairs> list;
    pairs tmp;
    int n, number, sum, i;

    cin>>n;

    for(i = 0; i < n; i++){
        cin >> number;
        sum = digit_sum(number);

        tmp.num = number;
        tmp.sum = sum;
        list.push_back(tmp);
    }

    sort(list.begin(), list.end(), cmp);

    for(i = 0; i < n-1; i++){
        cout<<list[i].num<<" ";
    }
    cout<<list[n-1].num<<endl;
}
