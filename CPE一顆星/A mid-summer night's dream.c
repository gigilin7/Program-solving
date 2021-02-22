//找出中位數，計算有幾個和中位數一樣的數字，找出可能有幾種最小值(包含不在所輸入的資料裡面)
#include <stdio.h>
#include <stdlib.h>//abs()
int main(void)
{
	int i=0,j=0,k=0,n,num[100]={0},mid,mid2,count=0,subtract,a,b,temp;
	for(i=0;scanf("%d",&n)!=EOF;i++)//決定要輸入幾個數字去運算 
	{
		int num[100]={0};//每次算完都要歸0 
		for(j=0;j<n;j++)
		{
			scanf("%d",&num[j]);//輸入每筆數字 
		}
		for(a=0;a<n-2;a++)//bubble sort(排順序，由小到大) 
		{
			for(b=0;b<n-2-a;b++)
			{
				if(num[b]>num[b+1])
				{
					temp=num[b];
					num[b]=num[b+1];
					num[b+1]=temp;
				}
			}
		}
		//偶數 (mid 跟 mid2都是中位數，且每個都要減1是因為第一個輸入的值是放在0的位置)
		if(n%2==0) 
		{
			mid=num[n/2-1];//原本是 n/2
			mid2=num[n/2];//原本是 n/2+1 
		}
		else 
		{
			mid=num[n/2];//原本是 n/2+1 
			mid2=num[n/2];//原本是 n/2+1 
		}
		for(k=0;k<n;k++)//計算有幾個和中位數一樣的數字
		{
			if(num[k]==mid||num[k]==mid2)
				count++;
		}
		subtract=abs(mid2-mid)+1;//如3跟8的subtract=|8-3|+1 
		//subtract指中位數之間的數字有幾個(包括中位數) 
		printf("%d %d %d\n",mid,count,subtract);//印出結果 
		count=0;
	}
	
	return 0;
}
 
