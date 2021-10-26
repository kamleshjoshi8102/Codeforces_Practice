#include <bits/stdc++.h>
using namespace std;

////////////////////////////////////////////////////////////////////////////////////
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<pair<int, int>> vpi;
typedef vector<ll> vl;
typedef vector<pair<ll, ll>> vpl;
const int MOD = 1e9 + 7;
const int MOD2 = 998244353;
const ll INF = 1e18;

#define all(v) v.begin(), v.end()
#define minv(a) *min_element(all(a))
#define maxv(a) *max_element(all(a))

#define mp make_pair
#define pb push_back
#define ff first
#define ss second

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define cases         \
    int test_case;    \
    cin >> test_case; \
    while (test_case--)
////////////////////////////////////////////////////////////////////////////////////

bool inc(pair<ll, ll> p1, pair<ll, ll> p2)
{
    return p1.ff < p2.ff;
}

int main()
{
    fastio

    cases{
        ll a,b,c;
        cin>>a>>b>>c;

        cout<<max(max(b,c)-a+1,0LL)<<" "<<max(max(a,c)-b+1,0LL)<<" "<<max(max(b,a)-c+1,0LL)<<"\n";
    }

}