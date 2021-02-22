//輸入2個數字n,m，判斷n是否為m的x次方 (輸入數字超過int範圍，所以用long long)
//輸入:125 5  輸出:125 25 5 1
//輸入:100 2  輸出:Boring! 
#include <stdio.h>
#include <math.h>
int main(void)
{
	long long i,n,m;
	while(scanf("%lld %lld",&n,&m)!=EOF)
	{
		int fun=0;
		long long output[200]={0};
		output[0] = n;
		for(i=1;;i++)//從1開始，因為0已經放好值了(上1行) 
		{
			output[i]=n/pow(m,i);
			if(output[i-1]%m!=0&&output[i-1]!=1)
			{
				fun=0;
				break;
			}
			else
			{
				fun=1;
			}
			if(output[i]==1)
				break;
		}
		
		for(i=0;;i++)
		{
			if(fun==0)
			{
				printf("Boring!");
				break;
			}
			else
			{
				printf("%lld",output[i]);
				if(output[i]!=1)
					printf(" ");
			}
			if(output[i]==1)
				break;
		}
		printf("\n");
	}
	return 0;
}
