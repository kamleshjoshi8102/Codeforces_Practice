#include<bits/stdc++.h>

using namespace std;

#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)

typedef long long int ll;

/*
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
*/

void solve()
{
   ll x;
   cin>>x;
   for(ll i=1;i*i*i<x;i++)
   {
       ll j=x-i*i*i;
       ll k=cbrt(j);
       if(k*k*k==j)
       {
        cout<<"YES"<<"\n";
        return;
       }
   }
   cout<<"NO"<<"\n";
        return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
