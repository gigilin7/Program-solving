//�@�դ@�ժ��r��reverse 
//�|��:5�� 30�Ӧr -> �@��6�Ӧrreverse 
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
		for(int i=0;i<n;i++)//�X�� 
		{
			for(int j=len/n-1;j>=0;j--)
			{
				cout<<s[j+i*(len/n)];
			}
		}
		cout<<'\n';
	}
}
