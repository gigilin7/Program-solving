//題目:http://luckycat.kshs.kh.edu.tw/homework/q665.htm 
//setdifference:取差集 
//例外:2 
//	   100 1
//     9 75 89 6 29 47 27 24 78 38 20 39 37 9 55 32 57 65 92
//     = 
// 
//     3 1
//     1 1 3
//     = 
//結果:0
// 
//     0 
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	set<int> T_coin,F_coin,ans;//同重量的coin，不同重量的coin，取差集後的coin 
	int M,N,K,n;
	char cmp;//>,=,<
	cin>>M;
	while(M--)
	{
		T_coin.clear();
		F_coin.clear();
		ans.clear();
		cin>>N>>K;//硬幣的數量，秤重的次數 
		while(K--)
		{
			int coin[100]={0};
			cin>>n;//天秤一邊會放幾個硬幣 
			for(int i=0;i<2*n;i++)
			{
				cin>>coin[i];
			}
			cin>>cmp;
			if(cmp=='=')//同重量 
			{
				for(int i=0;i<2*n;i++)
				{
					T_coin.insert(coin[i]);
				}
			}
			else//不同重量 
			{
				for(int i=0;i<2*n;i++)
				{
					F_coin.insert(coin[i]);
				}
			}
		}
		set_difference(F_coin.begin(),F_coin.end(),T_coin.begin(),T_coin.end(),inserter(ans,ans.begin()));
		if(ans.size()==1)
		{
			set<int>::iterator i=ans.begin();
			cout<<*i<<'\n';
		}
		else if(ans.empty())
		{
			set<int> all_coin;//所有硬幣 
			for(int i=1;i<=N;i++)
			{
				all_coin.insert(i);
			}
			set_difference(all_coin.begin(),all_coin.end(),T_coin.begin(),T_coin.end(),inserter(ans,ans.begin()));
			if(ans.size()==1)
			{
				set<int>::iterator i=ans.begin();
				cout<<*i<<'\n';
			}
			else
				cout<<"0\n";
		}
		else
			cout<<"0\n";
		if(M)
			cout<<'\n';
	}
}
