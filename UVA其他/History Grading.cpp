//LCS最長共同子序列(寫法要記得)
//4 2 3 1指的是答案1在位置4，答案2在位置2 
#include <iostream>
using namespace std;
int main()
{
	int n,pos;  //ans是正確答案，num是學生答案 
	int ans[30]={0},num[30]={0},LCS[30][30]={0};
	cin>>n;//有幾個答案 
	for(int i=1;i<=n;i++)
	{
		cin>>pos;//位置 
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
		//LCS最長共同子序列	
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
