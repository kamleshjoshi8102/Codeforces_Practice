#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,count=0;
    cin>>n>>m;
    if(n==m&&n==1)
    {
        cout<<2;
        return 0;
    }
    for(int i=1;i*i<=n;i++)
    {
        int a=i;
        int b=n-(i*i);
        if((b*b)+a==m)
            count++;
    }
    cout<<count;
    return 0;
}
