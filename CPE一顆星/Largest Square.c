//從現有圖形中算出中心點(r,c)向外擴張的最大正方形邊長
//(此正方形內的每個字都必須跟中心點的字一樣) 
#include <stdio.h>
#include <string.h>
int main(void)
{
	int i,j,k,l,n,M,N,Q,r,c;
	char square[100][100];
	scanf("%d",&n);//幾組 
	for(l=0;l<n;l++)
	{
		scanf("%d%d%d",&M,&N,&Q);//長寬範圍+幾個測試中心點 
		for(i=0;i<M;i++)
		{
			scanf("%s",&square[i]);//輸入現有圖形 
		}
		printf("%d %d %d\n",M,N,Q);
		while(Q--)
		{
			scanf("%d%d",&r,&c);//輸入中心點座標 
			int temp=0,ans=1;
			for(k=0;k<M||k<N;k++)//k=0測1*1,k=1測3*3...以此類推 
			{
				for(i=r-k;i<=r+k;i++)
				{
					for(j=c-k;j<=c+k;j++)
					{
						if(i<0||j<0||i>M||j>N)//超出長寬範圍 
						{
							temp=1;
							break;
						}
						if(square[i][j]!=square[r][c])//字不一樣 
						{
							temp=1;
							break;
						}
					}
				}
				if(temp==0)//每看一層正方形就算一次答案 
				{
					ans=k*2+1;
				}
				else
					break;
			}
			printf("%d\n",ans);
		}
	}
	return 0;
}
