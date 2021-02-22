#include <iostream>
using namespace std;

bool dfs(int G[200][200],int color[200],int n,int start)
{
	for(int i=0;i<n;i++)
	{
		if(G[start][i])
		{
			if(color[start]==color[i])//鄰接頂點顏色相同 
				return false;
			else if(color[i]==0)//鄰接頂點尚未填色 
			{
				color[i]= -color[start];//填上不同顏色(1 or -1) 
				if(!dfs(G,color,n,i))
					return false;
			}
		}
	}
	return true;
}

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	int n,m,a,b;
	
	while(cin>>n&&n)//頂點數 
	{
		int G[200][200]={0};//圖 
		int color[200]={0};//頂點 i 的顏色 (1 or -1) 
		cin>>m;//邊的數量 
		for(int i=0;i<m;i++)
		{
			cin>>a>>b;
			G[a][b]=G[b][a]=1;//因為是無向圖 
		}
		for(int i=0;i<n;i++)
		{
			if(color[i]==0)
			{  //若頂點 i 還沒填色的話就以 1 來填 
				color[i]=1;
				if(!dfs(G,color,n,i))
				{
					cout<<"NOT ";
					break;
				}
			}
		}
		cout<<"BICOLORABLE.\n";	
	}
} 
