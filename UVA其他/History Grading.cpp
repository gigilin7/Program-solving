//LCS�̪��@�P�l�ǦC(�g�k�n�O�o)
//4 2 3 1�����O����1�b��m4�A����2�b��m2 
#include <iostream>
using namespace std;
int main()
{
	int n,pos;  //ans�O���T���סAnum�O�ǥ͵��� 
	int ans[30]={0},num[30]={0},LCS[30][30]={0};
	cin>>n;//���X�ӵ��� 
	for(int i=1;i<=n;i++)
	{
		cin>>pos;//��m 
		ans[pos]=i;
	}
	while(cin>>pos)
	{
		num[pos]=1;
		for(int i=2;i<=n;i++)
		{
			cin>>pos;
			num[pos]=i;
		}
		//LCS�̪��@�P�l�ǦC	
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(ans[i]==num[j])
					LCS[i][j]=LCS[i-1][j-1]+1;
				else
					LCS[i][j]=max(LCS[i-1][j],LCS[i][j-1]);
			}
		}
		cout<<LCS[n][n]<<'\n';
	}
} 
