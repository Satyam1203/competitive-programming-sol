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
        int n;
        cin>>n;
        std::vector<int> a;
        for (int i = 0; i < n; i++) {
            int tmp;
            cin>>tmp;
            a.push_back(tmp);
        }
        sort(a.begin(),a.end());
        int min_diff=INT_MAX;
        for (int i = 0; i < n-1; i++) {
            if(a[i+1]-a[i]<min_diff){
                min_diff=a[i+1]-a[i];
            }
        }
        cout<<min_diff<<"\n";
    }
    return 0;
}
