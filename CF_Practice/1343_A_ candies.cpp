#include <iostream>
#include<math.h>
 
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n;
        int sum=3;
        for(k=2;(n%sum!=0);k++)
        {
            sum=sum+pow(2,k);
        }
        cout<<n/sum<<endl;
 
    }
}
