#include <bits/stdc++.h>
#define ll                      long long int
#define i(a,n)                  int a=n;
#define l(a,n)                  ll a=n;
#define d(a,n)                  double a=n;
#define s(a)                    string a;
#define c(a)                    ll a; cin>>a;
#define cd(a)                   double a; cin>>a;
#define cs(a)                   string a; cin>>a;
#define ci(a)                   cin>>a
#define co(a)                   cout<<a
#define cos(a)                  cout<<a<<" "
#define con(a)                  cout<<a<<endl
#define yes                     cout<<"YES"<<endl
#define no                      cout<<"NO"<<endl
#define nl                      cout<<endl
#define ca(arr,n)               for(ll i=0;i<n;i++) cin>>arr[i]
#define caa(arr,n)              c(n); ll arr[n]; for(ll i=0;i<n;i++) cin>>arr[i];
#define f0(i,a,n)               for(ll i=a;i>=n;i--)
#define f(i,n)                  for(ll i=0;i<n;i++)
#define f1(i,a,n)               for(ll i=a;i<n;i++)
#define lcm(a,b)                (a*b)/__gcd(a,b)
#define T                       ll t=1; cin>>t; while(t--)
#define sr(a,n)                 sort(a,a+n)
#define rv(a,n)                 reverse(a,a+n)
#define fast                    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ret(x)                  return cout<<x,0;
 
using namespace std;
 
int main()
{
    fast;
    T{
        c(n); 
        ll sum = 0, mean, ans = 0;
        vector<ll> v;
        f(i, n){
            c(a);
            sum += a;
            v.push_back(a);
        }
        sum *= 2;
        mean = sum/n;
        if(sum % n == 0){
            sort(v.begin(), v.end());
            f(i, n){
                ll x = v[i], y = mean - x;
                auto it1 = lower_bound(v.begin(), v.end(),y) - v.begin();
                auto it2 = upper_bound(v.begin(), v.end(),y) - v.begin();
                ans += (it2 - it1);
                if(x == y)  ans--;
            }
            ans /= 2;
        }
        con(ans);
    }
    return 0;
}
