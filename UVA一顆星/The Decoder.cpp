//�N��J���r����7�N�O����(ASCII�B��) 
#include <iostream>
using namespace std;
int main()
{
	string s;
	while(cin>>s)
	{
		for(int i=0;i<s.length();i++)
		{
			s[i]=s[i]-7;
			cout<<s[i];
		}
		cout<<endl;
	}
} 
