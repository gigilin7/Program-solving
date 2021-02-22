//將輸入的字元減7就是答案(ASCII運算) 
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
