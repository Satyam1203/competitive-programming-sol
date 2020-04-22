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
        ll n,c=0,tmp,tmp2;
        cin>>n;
        std::vector<int> a,b;
        for (int i = 0; i < n; i++) {
            cin>>tmp;
            a.push_back(tmp);
        }
        ll sum=0;
        for (int i = 0; i < n; i++) {
            tmp=INT_MIN;
            if(a[i]<0){
                tmp=a[i];
                while(a[++i]<0 && i<n){
                    tmp2=a[i];
                    tmp=max(tmp,tmp2);
                }
            }else{
                tmp=a[i];
                while(a[++i]>0 && i<n){
                    tmp2=a[i];
                    tmp=max(tmp,tmp2);
                }
            }
            i--;
            b.push_back(tmp);
        }
        for (int i = 0; i < b.size(); i++) {
            sum+=b[i];
        }
        cout<<sum<<"\n";
    }
}
