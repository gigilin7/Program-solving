//算附近有幾個地雷(*是有地雷 .是無地雷) 
//輸入:3 5       輸出:Field #1: 
//     **...          **100
//     .....          33200
//     .*...          1*100
#include <stdio.h>
int main(void)
{
	int i,j,h,w,count=1,k=0;
	for(k=0;;k++)
	{
		scanf("%d",&h);
		scanf("%d",&w);
		if(h==0&&w==0)
			break;
		else if((h!=0||w!=0)&&k!=0)
			printf("\n");
		
		char mine[100][100]={0};
		for(i=0;i<h;i++)
		{
			scanf("%s",mine[i]);
		}
		
		printf("Field #%d:\n",count++);
		for(i=0;i<h;i++)
		{
			for(j=0;j<w;j++)
			{
				int sum=0;//算中心的九宮格內有幾個地雷 
				
				if((i-1>=0 && j-1>=0) && mine[i-1][j-1]=='*')//左上 
					sum++;
				if(i-1>=0 && mine[i-1][j]=='*')//左 
					sum++;
				if((i-1>=0 && j+1<w) && mine[i-1][j+1]=='*')//左下 
					sum++;
				if(j-1>=0 && mine[i][j-1]=='*')//中上 
					sum++;
				if(j+1<w && mine[i][j+1]=='*')//中下 
					sum++;
				if((i+1<h && j-1>=0) && mine[i+1][j-1]=='*')//右上 
					sum++;
				if(i+1<h && mine[i+1][j]=='*')//右 
					sum++;
				if((i+1<h && j+1<w) && mine[i+1][j+1]=='*')//右下 
					sum++;
					
				if(mine[i][j]=='*')
					printf("*");
				else
					printf("%d",sum);
			}
			printf("\n");
		}
	}
	return 0;
}
