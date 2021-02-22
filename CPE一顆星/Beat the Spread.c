//s=big+small, d=big-small, 印出big跟small(都必須是正整數) 
#include <stdio.h>
int main(void)
{
	int n,s,d,i,big,small;
	scanf("%d",&n);//有幾組(一組有一個s一個d去做判斷) 
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&s,&d);
		if(s<=d) //s必大於d
		{
			printf("impossible\n");
		}	
		else
		{
			big=(s+d)/2;
			small=s-big;
			if((big-small)!=d) //為了正確計算像是s=100,d=1的例子 
				printf("impossible\n");
			else
				printf("%d %d\n",big,small);
		}
	}
	return 0;
}
