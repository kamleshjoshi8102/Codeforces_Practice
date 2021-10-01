#include <iostream>
 
using namespace std;
 
int main()
{
    long long int t,n;
   
    cin>>t;
    for(int i=0;i<t;i++)
    {
         cin>>n;
         long long int arr[30000];
       long long int count=0,x=0,c0=0,c1=0,c2=0,z=0;
        
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
            if(arr[j] % 3 == 0)
            {
                c0++;
            }
            else if(arr[j] % 3 == 1)
            {
                c1++;
            }
            else if(arr[j] % 3 == 2)
            {
                c2++;
            }
        }
        x=n/3;
        int flag = 0;
        while(flag == 0)
        {
            if(c0>x)
            {
                
                z=c0-x;
                c0=c0-z;
                c1=c1+z;
                count=count+z;
                z=0;
            }
            else if(c1>x)
            {
                 z=c1-x;
                c1=c1-z;
               
                c2=c2+z;
                count=count+z;
                z=0;
            }
            else if(c2>x)
            {
                
                z=c2-x;
                c2=c2-z;
                c0=c0+z;
                count=count+z;
                z=0;
            }
            else if(c1 == c2 && c2 == c0)
            {
                flag = 1;
            }
            
        }
        cout<<count<<endl;
    }
 
    return 0;
}
