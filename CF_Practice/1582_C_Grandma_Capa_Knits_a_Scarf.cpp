/* 🐱‍👤
        The Finest Steel has to go through hottest fire 🔥
   🐱‍👤
*/

#include <bits/stdc++.h>
#define ll                  long long
#define en                  '\n'
#define rep(a,b)            for(ll i=a;i<b;i++)
#define pb                  push_back
#define fr                  first
#define se                  second
#define all(v)              v.begin(),v.end()
#define JOSHI               ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
const ll                    mod = 1e9 + 7;
const int                   MAX_SIZE=2000001;

using namespace std;


 
bool ispalin(string s){   for(ll i=0;i<s.size()/2;i++){if(s[i]!=s[s.size()-i-1]){return false;}}return true;}
 




void solve()
{
    ll n;
    string s;
    cin>>n>>s;
    ll mini=n+1;
    // ll hash[27]={0};
    map<char,ll>hash;

    rep(0,s.size())
    {
        hash[s[i]]++;
    }
    for(char c='a';c<='z';c++)
    {
        if(hash[c]<=0)
        {
            continue;
        }
            ll l=0,r=n-1;
            ll cn=0;
    
            while(l<=r)
            {
                if(s[l]==s[r])
                {
                    l++;
                    r--;
                }
                else if(s[l]==c)
                {
                    cn++;
                    l++;
                }
                else if(s[r]==c)
                {
                    cn++;
                    r--;
                }
                else
                {
                    // both will not be equal to c so will not be palindrom
             
                    cn=n+1;
                    break;
                }
            }
            mini=min(cn,mini);
    }
    if(mini==n+1)
    {
        cout<<-1<<en;
        return;
    }
    cout<<mini<<en;




}

/*   
     => int overflow
     => array bounds 
     => special cases (n=1?)
     => do smth instead of nothing 
     => stay organized 
     => WRITE STUFF DOWN DON'T GET STUCK ON ONE APPROACH
     =>Read Stuff At Bottom !


     * +-----+-----------------+
     * |  n  | Worst Algorithm |
     * +-----+-----------------+
     * | 11  | O(n!), O(n^6)   |
     * | 18  | O(2^n * n^2)    |
     * | 22  | O(2^n * n)      |
     * | 100 | O(n^4)          |
     * | 400 | O(n^3)          |
     * | 2K  | O(n^2 log n)    |
     * | 10K | O(n^2)          |
     * | 1M  | O(n log n)      |
     * +-----+-----------------+
     
*/

int main(void)
{

        JOSHI

      // #ifndef ONLINE_JUDGE
      //  freopen("input.txt", "r", stdin);//for input from input.txt
      //  freopen("output.txt", "w", stdout); //for Output.txt
      // #endif
       


      ll test_case=1;
      cin>>test_case;
     
      while(test_case--)
      {

        solve();
       
      }
      


  cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
  return 0;

}
