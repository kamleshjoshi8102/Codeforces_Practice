#include <iostream>
using namespace std;
 
int main(void)
{
	int t;
	cin>>t;
	string str;
 
	int s1,s2,c1,c2;
 
	while(t--){
		cin>>str;
 
		c1=0,c2=0,s1=0,s2=0;
 
		for(int i=0;i<str.size();i++){
			if(str[i] == '(')
				s1++;
			else if(str[i] == '[')
				s2++;
			else if(str[i] == ')' && s1>0){
				c1++;
				s1--;
			}
			else if(str[i] == ']' && s2>0){
				c2++;
				s2--;
			}
		}
 
		cout<<c1+c2<<endl;
	}
}
