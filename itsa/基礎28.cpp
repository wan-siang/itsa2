#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    string jackpot; //頭獎
    string s1, s2, s3;  //特獎
    int money = 0; //total money
    int m[6] = {200000, 40000, 10000, 4000, 1000, 200};
    int n;
    int c = 0; //中幾碼
    int cnt[7];
    fill(cnt, cnt+7, 0);    //初始化

    cin >> jackpot >> s1 >> s2 >> s3; //輸入頭獎和特獎
    cin >> n;

    int cur_highest=0;
    for(int i = 0; i < n; i++){
        string num;
        cin >> num;
        //頭獎
        if(num == jackpot){
            money += 2000000;
            cnt[0]++;
        }else{
            //特獎
            for(int j = 0; j < 3; j++){
                if(j==0){
                    for(int k=7;k>=0;k--){
                       if(num[k]==s1[k]){
                            c++;
                        }else{
                            break;
                        }
                    }
                    for(int digit=8; digit>=3;digit--){
                        if(c==digit){
                            if(m[8-c]>cur_highest){
                                cur_highest = m[8-c];
                            }
                        }
                    }
                }else if(j==1){
                    for(int k=7;k>=0;k--){
                       if(num[k]==s2[k]){
                            c++;
                        }else{
                            break;
                        }
                    }
                    for(int digit=8; digit>=3;digit--){
                        if(c==digit){
                            if(m[8-c]>cur_highest){
                                cur_highest = m[8-c];
                            }
                        }
                    }
                }else{
                    for(int k=7;k>=0;k--){
                       if(num[k]==s3[k]){
                            c++;
                        }else{
                            break;
                        }
                    }
                    for(int digit=8; digit>=3;digit--){
                        if(c==digit){
                            if(m[8-c]>cur_highest){
                                cur_highest = m[8-c];
                            }
                        }
                    }

                }
                c=0;
            }
            for(int j = 0;j < 7;j++){
                if(cur_highest == m[j]){
                    cnt[j+1]++;
                }
            }
            money += cur_highest;
            cur_highest=0;
        }
    }

    for(int i=0;i<7;i++){
        if(i==6){
            cout<<cnt[i]<<endl;
            break;
        }
        cout<<cnt[i]<<" ";
    }
    cout<<money<<endl;
}
