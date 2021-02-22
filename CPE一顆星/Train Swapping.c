//計算一串數字要移動幾次才能由小到大排好
//舉例:4 3 2 1 要6次移動才能變成1 2 3 4 
#include <stdio.h>
int main(void)
{
	int N,n,num[50]={0},temp,count,i,j;
	scanf("%d",&N);//有幾組 
	while(N--)
	{
		count=0;
		scanf("%d",&n);//一組有幾個數字 
		for(i=0;i<n;i++)
		{
			scanf("%d",&num[i]);//一串數字 
		}
		for(i=0;i<n-1;i++)//bubble sort排大小 
		{
			for(j=0;j<n-1-i;j++)
			{
				if(num[j]>num[j+1])
				{
					temp=num[j];
					num[j]=num[j+1];
					num[j+1]=temp;
					count++;
				} 
			}
		}
		printf("Optimal train swapping takes %d swaps.\n",count);
	}
	return 0;
}
