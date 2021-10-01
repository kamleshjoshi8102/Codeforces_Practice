#include <iostream>
using namespace std;
 
void solve()
{
    int n;
    cin>>n;
    int arr[n];
 
    int count1 = 0,count2 = 0;
 
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i] == 2)
            count2++;
        else
            count1++;
    }
 
    if(count1%2){
        cout<<"NO"<<endl;
        return;
    }
 
    if(count2%2 == 0){
        cout<<"YES"<<endl;
        return;
    }
    else if(count1>=2){
        cout<<"YES"<<endl;
        return;
    }
 
    cout<<"NO"<<endl;
}
 
int main(void)
{
    int t,n;
    cin>>t;
 
    while(t--){
        solve();
    }
}
