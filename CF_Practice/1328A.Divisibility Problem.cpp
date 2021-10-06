#include <iostream>
using namespace std;

int main() 
{
int t;
cin>>t;

while(t--)
{
    int x,y;
    cin>>x>>y;

    if(x%y==0) 
    {
        cout<<0<<endl;
    }
    else 
    {
        int z=x%y;
        cout<<y-z<<endl;
    }
    }
    return 0;
}