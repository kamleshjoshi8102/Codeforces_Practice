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
int ump2[2000000];
int v[40];
unordered_map <int,int> ump;
int main()
{
    fastio
    cases{
        int n;
        cin >> n; 
        int f = 1;
        ump.clear();
        for(int i=0; i<n; i++){
            cin>>v[i];
            v[i] += 1e6;
            ump[v[i]]++;
            if(ump[v[i]] >= n/2){
                f = 0;
            }
        }
        if(f == 0){
            cout<<-1<<"\n";
        }
        else{
            for(int k=2e6; k>1; k--){
                for(int i=0; i<n; ++i){
                    ump2[v[i]%k]++;
                    if(ump2[v[i]%k] >= n/2){
                        f = 0;
                        break;
                    }
                }
                for(int i=0; i<n; i++){
                    ump2[v[i]%k] = 0;
                }
                if(f == 0){
                    cout<<k<<"\n";
                    break;
                }
            }
        }
    }
}