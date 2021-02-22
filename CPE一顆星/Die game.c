//骰子以東南西北4個方向滾動，找出最後朝上的那一面點數是多少
//骰子相對的2面上的點數總和是等於7  
//南北滾-東西不變，東西滾-南北不變 
#include <stdio.h>
#include <string.h>
int main(void)
{
	int n,i;
	char direction[6];
	while(scanf("%d",&n)!=0)//滾幾次 
	{
		if(n==0)
			break;
		int up=1,N=2,W=3,E=4,S=5;//還沒滾之前朝上的是1 
		for(i=0;i<n;i++)
		{
			char direction[6]={0};
			scanf("%s",direction);
			if(strcmp(direction,"north")==0)
			{
				N=up;
				up=S;
				S=7-N;
			}
			else if(strcmp(direction,"south")==0)
			{
				S=up;
				up=N;
				N=7-S;
			}
			else if(strcmp(direction,"east")==0)
			{
				E=up;
				up=W;
				W=7-E;
			}
			else if(strcmp(direction,"west")==0)
			{
				W=up;
				up=E;
				E=7-W;
			}
		}
		printf("%d\n",up);
	}
	return 0;
}
