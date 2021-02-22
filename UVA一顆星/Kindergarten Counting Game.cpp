//算有幾串字(字母才算，遇到空白就是下串字)
//輸入:I am abc ... hi!
//輸出:4
#include <iostream>
#include <ctype.h>//isalpha()判斷是不是字母 
using namespace std;
int main()
{
	string s;
	while(getline(cin,s))
	{
		int sum=0,flag=0;
		for(int i=0;i<s.length();i++)
		{
			if(isalpha(s[i])&&!flag)
			{
				sum++;
				flag=1;
			}
			else if(!isalpha(s[i]))
			{
				flag=0;
			}
		}
		cout<<sum<<endl;
	}
} 
