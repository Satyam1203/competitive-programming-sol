// Author: Satyam Lachhwani
// email: nakulbegana191170@gmail.com
// https://github.com/Satyam1203

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,t2;
    cin>>t;
    t2=t;
    while(t--){
        int n,trace=0;
        cin>>n;
        int a[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
                if(i==j) trace+=a[i][j];
            }
        }
        int row_cnt=0,col_cnt=0,tmp=0,rc=0,cc=0;
        for(int i=0;i<n;i++){
            rc=0;cc=0;
            for(int j=0;j<n-1;j++){
                tmp=0;
                for(int k=j+1;k<n && !rc;k++){
                    if(a[i][k]==a[i][j]){
                        tmp=1;rc=1;
                        break;
                    }
                }
                if(tmp==1) row_cnt++;
                tmp=0;
                for(int k=j+1;k<n && !cc;k++){
                    if(a[k][i]==a[j][i]){
                        tmp=1;cc=1;
                        break;
                    }
                }
                if(tmp==1) col_cnt++;
            }
        }
        cout<<"Case #"<<t2-t<<": "<<trace<<" "<<row_cnt<<" "<<col_cnt<<"\n";
    }
}