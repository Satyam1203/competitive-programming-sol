// Author: Satyam Lachhwani
// email: nakulbegana191170@gmail.com
// https://github.com/Satyam1203

#include<bits/stdc++.h> 
#define ll long long int
#define for(i,n) for(int i=0;i<n;i++)
using namespace std; 
int main() 
{ 
    vector<ll> power2;
    for(i,40){
        if(i==0){
            power2.push_back(1);
            continue;
        }
        power2.push_back(2*power2.back());
    }
    int t,t2;
    cin>>t;
    t2=t;
    while(t--){
        int x,y,quadrant=0;
        cin>>x>>y;
        cout<<"Case #"<<t2-t<<": ";
        if((x+y)&1){
            if(x<0 && y<0){
                quadrant=3;
            }else if(x<0){
                quadrant=2;
            }else if(y<0){
                quadrant=4;
            }else{
                quadrant=1;
            }
            x=abs(x);y=abs(y);
            int sum=x+y,c=0;
            while(sum){
                sum/=2;
                c++;
            }
            // cout<<c<<"\n";
            char ans[c]={'\0'};
            int tmp=c;
            while(y!=0 || x!=0){
                // cout<<x<<" "<<y<<endl;
                if(abs(x)>abs(y)){
                    if(x>0){
                        x-=power2[--c];
                        ans[c]='E';
                    }else{
                        x+=power2[--c];
                        ans[c]='W';
                    }
                }else{
                    if(y>0){
                        y-=power2[--c];
                        ans[c]='N';
                    }else{
                        y+=power2[--c];
                        ans[c]='S';
                    }
                }
            }
                // cout<<x<<" "<<y<<endl;
            for(i,tmp){
                if(quadrant==2){
                    if(ans[i]=='E') ans[i]='W';
                    else if(ans[i]=='W') ans[i]='E';
                }else if(quadrant==3){
                    if(ans[i]=='E') ans[i]='W';
                    else if(ans[i]=='W') ans[i]='E';
                    if(ans[i]=='N') ans[i]='S';
                    else if(ans[i]=='S') ans[i]='N';
                }else if(quadrant==4){
                    if(ans[i]=='N') ans[i]='S';
                    else if(ans[i]=='S') ans[i]='N';
                }
                cout<<ans[i];
            }
            // cout<<"TO BE DONE";
        }else{
            cout<<"IMPOSSIBLE";
        }
        // cout<<ans;
        cout<<"\n";
    }
	return 0; 
} 
