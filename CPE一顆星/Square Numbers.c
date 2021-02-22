//找出兩數字範圍內有幾個完全平方數 
#include <stdio.h>
int main(void)
{
	int a,b,i;
	while(1)
	{
		scanf("%d%d",&a,&b);
		if(a==0||b==0)
			break;
		int sum=0;
		for(i=1;i*i<=b;i++)
		{
			if(i*i<=b&&i*i>=a)
				sum++;
		}
		printf("%d\n",sum);
	}
	return 0;
} 
