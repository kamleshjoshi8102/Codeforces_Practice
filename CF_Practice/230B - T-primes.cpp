#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int a[1000000] = {0};
    for(int i=2; i<=1000000; i++)
    {
        if(a[i] == 0)
        {
            for(int j=2; i*j<=1000000; j++)
            {
                a[i*j]=1;
            }
        }
    }
    int x;
    cin>>x;
    long long int b;
    long long int sqr;
    for(int i=0; i<x; i++)
    {
        cin>>b;
        sqr=sqrt(b);
        if(b==1)
            cout<<"NO"<<endl;
        else if((sqr*sqr==b) && (a[sqr]==0))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
