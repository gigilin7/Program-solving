//�⦳�X��r(�r���~��A�J��ťմN�O�U��r)
//��J:I am abc ... hi!
//��X:4
#include <iostream>
#include <ctype.h>//isalpha()�P�_�O���O�r�� 
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
