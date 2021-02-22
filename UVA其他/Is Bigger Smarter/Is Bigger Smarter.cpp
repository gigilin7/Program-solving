//三顆星 
//用 LDS去解
//先將大象按體重增長排序，求IQ的一個最長遞減子序列(個數&位置) 
#include <iostream>
#include <utility>//pair 
#include <algorithm>
#include <vector>
using namespace std;

int dp[1000],sum=0,W[1000],S[1000],N[1000],k=0,a=0,prev_pos[1000],ans=0;
vector< pair< int, pair<int,int> > > vp;
//first是體重，second.first是IQ，second.second是一開始的位置 
void output(int s)
{
	if (prev_pos[s] == s) 
	{
		cout<<vp[s].second.second<<endl;
	}
	else 
	{
		output(prev_pos[s]);
		cout<<vp[s].second.second<<endl;
	}
}
int main()
{
	while(cin>>W[k]>>S[k])
	{
		N[k]=k+1;
		vp.push_back(make_pair(W[k],make_pair(S[k],N[k])));
		k++;
	}
	
	sort(vp.begin(), vp.end());//以first去做排序，其他跟著動 
	
	for(int i=0;i<vp.size();i++)
	{
		dp[i]=1;
		prev_pos[i]=i;
		for(int j=0;j<i;j++)
		{
			if(vp[j].second.first>vp[i].second.first&&dp[i]<dp[j]+1)
			{
				dp[i]=dp[j]+1;
				prev_pos[i]=j;//存上一個數(vp[j].second.first)的位置 
			} 
			if(dp[i]>sum)
			{
				sum=dp[i];
				ans=i;//存最長子序列的位置 
			}
		}
	}
	cout<<sum<<endl;//個數 
	output(ans);//位置(指一開始的位置) 
} 
