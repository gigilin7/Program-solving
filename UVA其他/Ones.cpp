//�Q�ξl�ƪ��S�ʨӸѦ��D
//1%3 = 0 �l 1 (�����̰���h�l��)
//11%3 = 3 �l 2 (�A��J�@�쪺1)
//21%3 = 7 �l 0 (�A��J�@�쪺1)
//�o�쵪�׬O111�O3�����ơA�ҥHdigits�O3
#include <iostream>
using namespace std;
int main()
{
	int n,temp;
	while(cin>>n)
	{
		int count=0;
		temp=1%n;
		count++;
		while(temp!=0)
		{
			temp=(temp*10+1)%n;
			count++;
		}
		cout<<count<<'\n';
	}
} 
//�Q�k�Ѧ�:
//http://kos74185foracm.blogspot.com/2011/12/10127-ones.html 
