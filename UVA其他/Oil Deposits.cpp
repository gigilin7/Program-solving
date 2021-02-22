//找出這塊地包含幾個不同的oil deposit
//'@'代表此區域含石油，'*'代表此區域含石油 
//相連的'@'屬於同一個oil deposit 
//用 DFS去解 
#include <iostream>
using namespace std;
int m,n;
char field[100][100];
void dfs(int x,int y)
{
	field[x][y]='*';//將目前位置換成 *  
	for(int dx=-1;dx<=1;dx++)//移動八方向(九宮格) 
	{
		for(int dy=-1;dy<=1;dy++)
		{//x方向為dx，y方向為dy，移動的位置為(nx,ny) 
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
