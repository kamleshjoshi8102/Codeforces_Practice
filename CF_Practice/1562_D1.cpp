//CODEFORCES QUESTION 1562 D1
#include <iostream>
#include <set> 
#include <iterator>
#include <bitset> 
#include <bits/stdc++.h> 
using namespace std;
typedef  long long int ll;
ll mod=1000000007;


int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        
        int n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        
        int cnt[n+1][4];
        memset(cnt,0,sizeof(cnt));
        for(int i=1;i<=n;i++){
            for(int j=0;j<4;j++){
                cnt[i][j] = cnt[i-1][j];
            }
            if(i&1){
                if(s[i-1]=='+'){
                    cnt[i][0]++;
                }else{
                    cnt[i][1]++;
                }
            }else{
                if(s[i-1]=='+') cnt[i][2]++;
                else cnt[i][3]++;
            }
        }
        while(q--){
            int l,r;
            cin>>l>>r;
          
            //cout<<cnt[r][0]<<" "<<cnt[r][1]<<" "<<cnt[r][2]<<" "<<cnt[r][3]<<"\n";
            if(cnt[r][0]-cnt[l-1][0]+cnt[r][3]-cnt[l-1][3]-cnt[r][1]-cnt[r][2]+cnt[l-1][2]+cnt[l-1][1]==0)
                cout<<0<<"\n";
            else
                if(abs(cnt[r][0]-cnt[l-1][0]+cnt[r][3]-cnt[l-1][3]-cnt[r][1]-cnt[r][2]+cnt[l-1][1]+cnt[l-1][2])%2==0){
                    cout<<2<<"\n";
                }else{
                    cout<<1<<"\n";
                }
                
            }
        
        
    
        
    
        
    }
    return 0;
}
