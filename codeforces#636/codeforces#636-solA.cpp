// Author: Satyam Lachhwani
// email: nakulbegana191170@gmail.com
// https://github.com/Satyam1203

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int power2[30];
    for (int i = 0; i < 30; i++) {
        if(i==0){
            power2[i]=1;
            continue;
        }
        power2[i]=pow(2,i)+power2[i-1];
    }
    int t;
    cin>>t;
    while(t--){
        ll n,c=0;
        cin>>n;
        for (int i = 1; i < 30; i++) {
            for (int j = 1; j < 100; j++) {
                if(n%(power2[i]*j)==0){
                    // cout<<"power2 "<<power2[i]<<"j "<<j<<"\n";
                    cout<<n/(power2[i]*j)<<"\n";
                    c=1;
                    break;
                }
            }
            if(c) break;
        }
    }
}
