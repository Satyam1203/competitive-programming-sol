// Author: Satyam Lachhwani
// email: nakulbegana191170@gmail.com
// https://github.com/Satyam1203

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,odd_cnt=0,even_cnt=0,c=0;
        cin>>n;
        std::vector<int> a;
        for (int i = 0; i < n; i++) {
            int tmp;
            cin>>tmp;
            if(tmp&1) odd_cnt++;
            else even_cnt++;
            a.push_back(tmp);
        }
        if(even_cnt%2==0 && odd_cnt%2==0){
            cout<<"YES\n";
            continue;
        }
        sort(a.begin(),a.end());
        for (int i = 0; i < n; i++) {
            if(a[i+1]-a[i]==1){
                a.erase(a.begin()+i);
                a.erase(a.begin()+i);
                n-=2;
                    // Check
                even_cnt=odd_cnt=0;
                for(auto i:a){
                    if(i&1) odd_cnt++;
                    else even_cnt++;
                }
                if(even_cnt%2==0 && odd_cnt%2==0){
                    cout<<"YES\n";
                    c=1;
                    break;
                }
            }
        }
        if(c) continue;
        even_cnt=odd_cnt=0;
        for(auto i:a){
            if(i&1) odd_cnt++;
            else even_cnt++;
        }
        if(even_cnt%2==0 && odd_cnt%2==0){
            cout<<"YES\n";
        }else cout<<"NO\n";
    }
    return 0;
}
