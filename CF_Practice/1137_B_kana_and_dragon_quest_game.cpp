#include<bits/stdc++.h>
using namespace std;
void absorption(int &h)
{
    h=(h/2)+10;
}

void strike(int &h)
{
    h=h-10;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int h,n,m;
        cin>>h>>n>>m;
        if(h>(m*10))
        {while(n)
            {absorption(h);
            --n;}}

        while(m){
            strike(h);
            --m;
        }
        if(h<=0)
        {cout<<"YES"<<endl;
        }
        else
        {cout<<"NO"<<endl;}
    }
    return 0;
}
