#include<bits/stdc++.h>

using namespace std;

int main()
{
	int h=0,m=0,s=0;
	 system("cls");
    //  string str;
    //  cout<<"Please Enter Day & Date format in Day,DD/MM/YYYY"<<endl;
    // cin.getline(str,50);
    // scanf(" %[^\n]s",str);
	cout<<"Please enter a time format in HH:MM:SS\n";
 
	
    cin>>h>>m>>s;
     
	start:
	for(h;h<24;h++)
	{
		for(m;m<60;m++)
		{
			for(s;s<60;s++)
			{
				 system("cls");
				// cout<<"\n\n\t\t\t%d:%d:%d"<<h<<" "m<<" "<< s;
                cout<<"\n\n\t\t\t"<<h<<":"<<m<<":"<< s;
				if(h<12)
				{
					cout<<" AM";
				}
				else
				{
					cout<<" PM";
				}
				// cout<<"\n\n\t\t\t"<<str;
				for(double i=0;i<3619999;i++)
				       {
                         i++;
				         i--;
                       }
			}
			s=0;
		}
		m=0;
	}
	h=0;
	goto start;
return 0;
}
