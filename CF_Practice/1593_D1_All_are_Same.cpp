#include <bits/stdc++.h>
using namespace std;

////////////////////////////////////////////////////////////////////////////////////
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef map<int,int> mi;
typedef map<ll,ll> ml;
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

bool my(pair<int, int> p1, pair<int, int> p2)
{
    return p1.ff > p2.ff;
}

bool incss(pair<ll, ll> p1, pair<ll, ll> p2)
{
    return p1.ss < p2.ss;
}

bool decc(pair<ll, ll> p1, pair<ll, ll> p2)
{
    return p1.ss < p2.ss;
}

ll fa(ll n)
{
    ll ans = 1;
    for (ll i = 2; i <= n; i++)
    {
        ans *= i;
        ans = ans%MOD;
    }

    return ans;
}

int main()
{
    fastio
    cases{
        int n;
        cin >> n; 

        vi v(n),ans;
        for(int i=0; i<n; i++){
            cin>>v[i];
        }

        int mnn = *min_element(all(v));

        for(int i=0; i<n; i++){
            int x = v[i] - mnn;
            if(x != 0){
                ans.pb(x);
            }
        }

        int cnt = -1;
        if(ans.size() != 0){
            cnt = ans[0];
            for(int i=1; i<ans.size(); i++){
                cnt = __gcd(cnt,ans[i]);
            }
        }

        cout<<cnt<<"\n";
    }
}