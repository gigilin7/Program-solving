//��X�o���a�]�t�X�Ӥ��P��oil deposit
//'@'�N���ϰ�t�۪o�A'*'�N���ϰ�t�۪o 
//�۳s��'@'�ݩ�P�@��oil deposit 
//�� DFS�h�� 
#include <iostream>
using namespace std;
int m,n;
char field[100][100];
void dfs(int x,int y)
{
	field[x][y]='*';//�N�ثe��m���� *  
	for(int dx=-1;dx<=1;dx++)//���ʤK��V(�E�c��) 
	{
		for(int dy=-1;dy<=1;dy++)
		{//x��V��dx�Ay��V��dy�A���ʪ���m��(nx,ny) 
			int nx=x+dx,ny=y+dy;
			if(0<=nx && nx<m && 0<=ny && ny<n &&field[nx][ny]=='@')
				dfs(nx,ny);
		}
		
	}
}
int main()
{
	while(cin>>m>>n)
	{
		int sum=0;
		if(m==0&&n==0)
			break;
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>field[i][j];
			}
		}
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(field[i][j]=='@')
				{
					dfs(i,j);
					sum++;
				}
			}
		}
		cout<<sum<<endl;
	}
}
