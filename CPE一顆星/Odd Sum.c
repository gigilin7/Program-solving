//計算兩輸入數字之間的奇數和(如1到5之間是1+3+5=9，2到5之間是3+5=8) 
#include <stdio.h>
int main(void)
{
	int i,j,n,a,b,sum;
	scanf("%d",&n);//有幾組輸入(一組有兩個數字) 
	for(i=1;i<=n;i++)
	{
		sum=0;
		scanf("%d%d",&a,&b);
		if(a%2==0)//如果是偶數 
			a=a+1;
		for(j=a;j<=b;j=j+2)
		{
			sum=sum+j;
		}
		printf("Case %d: %d\n",i,sum);
	}
	return 0;
}
