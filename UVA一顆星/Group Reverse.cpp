//一組一組的字串reverse 
//舉例:5組 30個字 -> 一組6個字reverse 
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	string s;
	while(cin>>n&&n)
	{
		cin>>s;
		int len=s.length();
		for(int i=0;i<n;i++)//幾組 
		{
			for(int j=len/n-1;j>=0;j--)
			{
				cout<<s[j+i*(len/n)];
			}
		}
		cout<<'\n';
	}
}
