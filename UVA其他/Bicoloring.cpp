#include <iostream>
using namespace std;

bool dfs(int G[200][200],int color[200],int n,int start)
{
	for(int i=0;i<n;i++)
	{
		if(G[start][i])
		{
			if(color[start]==color[i])//�F�����I�C��ۦP 
				return false;
			else if(color[i]==0)//�F�����I�|����� 
			{
				color[i]= -color[start];//��W���P�C��(1 or -1) 
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
	
	while(cin>>n&&n)//���I�� 
	{
		int G[200][200]={0};//�� 
		int color[200]={0};//���I i ���C�� (1 or -1) 
		cin>>m;//�䪺�ƶq 
		for(int i=0;i<m;i++)
		{
			cin>>a>>b;
			G[a][b]=G[b][a]=1;//�]���O�L�V�� 
		}
		for(int i=0;i<n;i++)
		{
			if(color[i]==0)
			{  //�Y���I i �٨S��⪺�ܴN�H 1 �Ӷ� 
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
