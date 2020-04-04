// Author: Satyam Lachhwani
// email: nakulbegana191170@gmail.com
// https://github.com/Satyam1203

#include<bits/stdc++.h> 
using namespace std; 
bool sortrow( const vector<int>& v1, const vector<int>& v2 ) { 
    return v1[0] < v2[0]; 
} 
bool sortrow2( const vector<int>& v1, const vector<int>& v2 ) { 
    return v1[1] < v2[1]; 
} 
int main() 
{ 
    int t,t2;
    cin>>t;
    t2=t;
    while(t--){
        int n,ans=0;
        cin>>n;
        vector<char> res;
        vector<vector<int> > schedule( n , vector<int> (3));  
        vector<vector<int> > temp( n , vector<int> (3)); 
        for (int i = 0; i < n; i++) {
            cin>>schedule[i][0]>>schedule[i][1];
            schedule[i][2]=i;
        }
        temp=schedule;
        sort(schedule.begin(),schedule.end(),sortrow2);
        sort(schedule.begin(),schedule.end(),sortrow);
        int c_l,j_l=-1;
        res.push_back('C');
        c_l=schedule[0][1];
        vector<int> rem;
        for (int i = 1; i < n; i++) {
            if(schedule[i][0]>=c_l){
                res.push_back('C');
                c_l=schedule[i][1];
            }else if(schedule[i][0]>=j_l){
                res.push_back('J');
                j_l=schedule[i][1];
            }else{
                rem.push_back(i);
            }
        }
        cout<<"Case #"<<t2-t<<": ";
        if(rem.size()){
            cout<<"IMPOSSIBLE";
        }
        else{
            vector<char> res_sort(n);
            for (int i = 0; i < n; i++) {
                res_sort[schedule[i][2]]=res[i];
            }
            for (int i = 0; i < n; i++) {
                cout<<res_sort[i];
            }
        }
        cout<<"\n";
    }
	return 0; 
} 
