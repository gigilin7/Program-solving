//從輸入(1 -1)的多項式(x-1)中找出微分後的多項式(1)，並將x代入印出答案 
#include <stdio.h>
int main(void)
{
	int x,a;
	char c;
	while(scanf("%d",&x)!=EOF)
	{
		int ans=0,sum=0;
		char c=0;
		while(c!='\n')
		{
			scanf("%d",&a);
			// 此題重要解法 
			ans=ans*x+sum;
			sum=sum*x+a;
			// 
			c=getchar();//為了判斷a的輸入是否結束 
			
		}
		printf("%d\n",ans);
	}
	return 0;
}
