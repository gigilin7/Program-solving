//寫一個計算GCD(最大公因數)的function，並套入題目給的公式得出答案(G)  
#include <stdio.h>
int GCD(int m, int n) 
{
	while(n!=0)//輾轉相除法 
	{
		int r=m%n;
		m=n;
		n=r;
	}
	return m;
}

int main(void)
{
	int N,i,j;
	while(scanf("%d",&N)!=0)
	{
		if(N==0)
			break;
		int G=0;
		for(i=1;i<N;i++)//題目給的公式 
		{
			for(j=i+1;j<=N;j++)
			{
				G+=GCD(i,j);
			}
		}
		printf("%d\n",G);
	}
	return 0;
} 
