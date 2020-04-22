// Author: Satyam Lachhwani
// email: nakulbegana191170@gmail.com
// https://github.com/Satyam1203

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll n,c=0;
        cin>>n;
        if(n%4){
            cout<<"NO\n";
        }else{
            ll rem,even=0,odd=0,tmp;
            cout<<"YES\n";
            for (int i = 0; i < n/2; i++) {
                tmp=2*(i+1);
                even+=tmp;
                cout<<tmp<<" ";
            }
            for (int i = 0; i < n/2-1; i++) {
                tmp=2*i+1;
                odd+=tmp;
                cout<<tmp<<" ";
            }
            rem=even-odd;
            cout<<rem<<"\n";
        }
    }
}
