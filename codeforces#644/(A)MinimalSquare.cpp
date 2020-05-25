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
        int A,B;
        cin>>A>>B;
        int ans;
        if(A<B) {
            ans=2*A;
            ans=max(ans,B);
        }else{
            ans=2*B;
            ans=max(ans,A);
        }
        cout<<ans*ans<<"\n";
    }
    return 0;
}
