//�T���P 
//�� LDS�h��
//���N�j�H���魫�W���ƧǡA�DIQ���@�ӳ̪�����l�ǦC(�Ӽ�&��m) 
#include <iostream>
#include <utility>//pair 
#include <algorithm>
#include <vector>
using namespace std;

int dp[1000],sum=0,W[1000],S[1000],N[1000],k=0,a=0,prev_pos[1000],ans=0;
vector< pair< int, pair<int,int> > > vp;
//first�O�魫�Asecond.first�OIQ�Asecond.second�O�@�}�l����m 
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
	
	sort(vp.begin(), vp.end());//�Hfirst�h���ƧǡA��L��۰� 
	
	for(int i=0;i<vp.size();i++)
	{
		dp[i]=1;
		prev_pos[i]=i;
		for(int j=0;j<i;j++)
		{
			if(vp[j].second.first>vp[i].second.first&&dp[i]<dp[j]+1)
			{
				dp[i]=dp[j]+1;
				prev_pos[i]=j;//�s�W�@�Ӽ�(vp[j].second.first)����m 
			} 
			if(dp[i]>sum)
			{
				sum=dp[i];
				ans=i;//�s�̪��l�ǦC����m 
			}
		}
	}
	cout<<sum<<endl;//�Ӽ� 
	output(ans);//��m(���@�}�l����m) 
} 
