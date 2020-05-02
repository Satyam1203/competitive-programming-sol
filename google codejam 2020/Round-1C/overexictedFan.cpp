#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,tt;
    cin>>t;
    tt=t;
    while(t--){
        int n,x,y,i,c=0;
        cin>>x>>y;
        string s;
        cin>>s;
        n=s.length();
        cout<<"Case #"<<tt-t<<": ";
        for(i=0;i<n;i++){
            if(abs(x)+abs(y)<=i){
                c=1;
                break;
            }
            if(s[i]=='N'){
                y++;
            }else if(s[i]=='S'){
                y--;
            }else if(s[i]=='E'){
                x++;
            }else{
                x--;
            }
        }
        if(abs(x)+abs(y)<=i){
            c=1;
        }
        if(!c) cout<<"IMPOSSIBLE\n";
        else cout<<i<<"\n";
    }
    return 0;
}
