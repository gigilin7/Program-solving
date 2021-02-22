//判斷輸入數字的哪些進位制能讓花費最少? 
//輸入數字要先轉換成2到36進位制，並計算每個進位制的數字總花費，然後去做比較 
#include <stdio.h>
#include <string.h>
int main(void)
{
	int n,m,i,j,k,l,num;
	scanf("%d",&n);//有幾組case 
	for(i=1;i<=n;i++)
	{
		if(i>1)
			printf("\n");
		printf("Case %d:\n",i);
		int money[37]={0};
		for(j=0;j<36;j++)//money代表數字0到35的花費(如0是1$，1是3$等等) 
		{
			scanf("%d",&money[j]);
		}
		scanf("%d",&m);//1個case有幾組輸入數字 
		while(m--)
		{
			int base[37]={0},min=1000000000;
			scanf("%d",&num);//輸入數字 
			for(k=2;k<=36;k++)//2到36進位制
			{
				int num1=num;
				int change=0,sum=0;
				while(num1!=0)
				{
					change=num1%k;//change是轉換過後的每一位數 
					num1=num1/k;
					sum=sum+money[change];//sum是數字轉換後的總花費 
				}
				if(sum<min)//min是存某進位制的最小花費，base是存最小花費的是哪些進位制
				{
					min=sum;
					base[0]=k;//第一個位置做替換 
					l=1;
				}
				else if(sum==min)
				{
					base[l]=k;//其他位置如果花費跟第一個位置一樣就往後放，不一樣就不動 
					l++;
				}
			}
			printf("Cheapest base(s) for number %d:",num);
			for(j=0;j<l;j++)
			{
				printf(" %d",base[j]);
			}
			printf("\n");
		}
	}
	return 0;
}
