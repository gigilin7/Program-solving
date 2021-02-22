#include <iostream>
#include <string>
using namespace std;
int main()
{
	string table="A   3  HIL JM O   2TUVWXY51SE Z  8 ";
	string s;
	bool mirror,palindrome;
	while(cin>>s)
	{
		mirror=1;
		palindrome=1;
		for(int i=0;i<=s.length()/2;i++)
		{
			if(s[i]!=s[s.length()-1-i])
				palindrome=0;
			
			if(isalpha(s[s.length()-1-i]) && s[i]!=table[s[s.length()-1-i]-'A'])//'A'=65
				mirror=0;
			else if(!isalpha(s[s.length()-1-i]) && s[i]!=table[s[s.length()-1-i]-'1'+26])//'1'=49
				mirror=0;
		}
		
		if(palindrome && mirror)
		{
			cout<<s<<" -- is a mirrored palindrome."<<endl;
		}
		else if(palindrome)
		{
			cout<<s<<" -- is a regular palindrome."<<endl;
		}
		else if(mirror)
		{
			cout<<s<<" -- is a mirrored string."<<endl;
		}
		else
		{
			cout<<s<<" -- is not a palindrome."<<endl;
		}
		cout<<endl;
	}
} 
