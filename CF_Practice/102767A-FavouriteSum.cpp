// Problem Link: https://codeforces.com/gym/102767/problem/A

#include <iostream>
using namespace std;

int main() {
	// your code goes here
    long long	int t;
	cin>>t;
	while(t--){
	   long long int n,x;
	    cin>>n>>x;
	   long long  int a[n],s1=0;
	    for (int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    s1=x*(x+1)/2;
	    for(int i=0;i<n;i++){
	        if(a[i]<=x){
	            s1=s1-(2*a[i]);
	        }
	    }
	   
	    cout<<s1<<endl;
	}
	return 0;
}
