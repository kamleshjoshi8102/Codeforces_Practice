#include <bits/stdc++.h>
#include <algorithm>
#define ll long long

using namespace std;

void solve(int t){
    while (t--){
        string a;
        cin >> a;
        int n;
        cin >> n;
        int arr[26],max=0;;
        for(int i=0;i<26;i++){
            cin >> arr[i];
            if(arr[i]>max){
                max=arr[i];
            }
        }
        int sum=0;
        for(int i=0;i<a.length();i++){
            sum+=arr[((int)a[i])-97]*(i+1);
        }
        for(int i=0;i<n;i++){
            sum+=max*(a.length()+i+1);
        }
        cout << sum;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    solve(t);
    return 0;
}
