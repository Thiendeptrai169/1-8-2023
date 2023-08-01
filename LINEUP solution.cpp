#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum1,sum2;
    sum1=sum2=0;
    bool check = false;
    for (int i=0;i<n;++i){
        int x,y;
        cin>>x>>y;
        x%=2;
        y%=2;
        sum1+=x;
        sum2+=y;
        int tmp = x^y;
        if (tmp) check = true;
    }
    if (sum1%2==0 && sum2%2==0){
        cout<<0;
    }
    else{
        if (sum1%2 == 1 && sum2%2== 1 && check) cout<<1;
        else cout<<-1;
    }
}