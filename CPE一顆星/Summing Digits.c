//���������A�ҥH�����|��(�ҨD���ȥ����p��10) 
//12345=1+2+3+4+5=15�A15=1+5=6�A�ҨD=6 
#include <stdio.h>
int main(void)
{
	int num,sum;
	while(scanf("%d",&num)!=0)
	{
		sum=num;
		if(num==0)
			break;
		while(sum>=10)
		{
			num=sum;
			sum=0;
			while(num!=0)
			{
				sum=sum+num%10;
				num=num/10;
			}
		}
		printf("%d\n",sum);
	}
	return 0;
} 
