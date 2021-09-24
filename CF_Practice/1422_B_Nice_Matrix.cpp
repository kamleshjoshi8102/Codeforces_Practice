#include <bits/stdc++.h>
#define ll                  long long
#define en                  '\n'
#define rep(a,b)            for(ll i=a;i<b;i++)
#define pb                  push_back
#define fr                  first
#define se                  second
#define all(v)              v.begin(),v.end()
const ll                    mod = 1e9 + 7;

using namespace std;




//              ********************** Functions Start **********************          //



ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b;}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}


bool isprime(ll n){ 
    if (n <= 1) return true;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
            for (ll i = 5; i * i <= n; i = i + 6)
                    { if (n % i == 0 || n % (i + 2) == 0){ return false;}}
    return true;
}

void swap(int &x, int &y) {int temp = x; x = y; y = temp;}

bool ispalin(string s)
{
    for(ll i=0;i<s.size()/2;i++)
    {
        if(s[i]!=s[s.size()-i-1])
        {
            return false;
        }
    }
    return true;
}


//              ********************** Functions End **********************          //




void solve()
{
       ll n,m;
       cin>>n>>m;

       ll mx[n][m];
       for(int i=0;i<n;i++)
       {
            for(int j=0;j<m;j++)
            {
                cin>>mx[i][j];
            }
       }

       // for palindrom we need to have all 4 equal 
       /*
                for a[1][1]->a[1][1]==a[1][m]==a[n][m]==a[n][1]
                this is palindrom for matrix 
                we can achieve this by taking median of these four elements 
       */

       ll res=0;

       for(int i=0;i<n;i++)
       {
            for(int j=0;j<m;j++)
            {
                vector<int>v;
                v.pb(mx[i][j]);
                v.pb(mx[n-i-1][m-j-1]);
                v.pb(mx[i][m-j-1]);
                v.pb(mx[n-i-1][j]);

                sort(v.begin(),v.end());

                // for(auto h:v)
                // {
                //     cout<<h<<" ";
                // }
                // cout<<en;              


                ll median=v[1];

                res+=abs(median-mx[i][j]);
                mx[i][j]=median;
                res+=abs(median-mx[i][m-j-1]);
                mx[i][m-j-1]=median;
                res+=abs(median-mx[n-i-1][j]);
                mx[n-i-1][j]=median;
                res+=abs(median-mx[n-i-1][m-j-1]);
                mx[n-i-1][m-j-1]=median;

            }
       }
 
       cout<<res<<en;
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

        ios::sync_with_stdio(0);
        cin.tie(0);

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
