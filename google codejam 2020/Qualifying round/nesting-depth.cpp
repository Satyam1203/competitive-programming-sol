// Author: Satyam Lachhwani
// email: nakulbegana191170@gmail.com
// https://github.com/Satyam1203

#include<bits/stdc++.h> 
using namespace std; 
int main() 
{ 
    int t,t2;
    cin>>t;
    t2=t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        vector<char> res;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <= 9; j++) {
                if(int(s[i]-48)==j){
                    for(int k=0;k<j;k++){
                        res.push_back('(');
                    }
                    res.push_back(s[i]);
                    for(int k=0;k<j;k++){
                        res.push_back(')');
                    }
                }
            }
        }
        for (auto i = res.begin(); i != res.end()-1; i++) {
            if(*i==')' && *(i+1)=='('){
                res.erase(i,i+2);
                i-=2;
            }
        }
        n=res.size();
        cout<<"Case #"<<t2-t<<": ";
        for (int i = 0; i < n; i++) {
            cout<<res[i];
        }
        cout<<"\n";
    }
	return 0; 
} 
