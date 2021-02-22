//給月份跟日期算出是星期幾 
//在2011年(非閏年non-leap)列出的都是星期一:
//1/10, 2/21 4/4, 5/9, 6/6, 7/11, 8/8, 9/5, 10/10, 11/7, 12/12
//閏年:是4的倍數，不是100的倍數 
#include <stdio.h>
#include <string.h>
int main(void)
{
	int n,M,D,temp;
	char day[8][10]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	scanf("%d",&n);//有幾組
	while(n--)
	{
		scanf("%d%d",&M,&D);//月份，日期 
		if(M==1)
		{
			temp=(D-10)%7;
			if(temp<0)
				temp=temp+7;
			printf("%s\n",day[temp]);
		}
		else if(M==2)
		{
			temp=(D-21)%7;
			if(temp<0)
				temp=temp+7;
			printf("%s\n",day[temp]);
		}
		else if(M==4)
		{
			temp=(D-4)%7;
			if(temp<0)
				temp=temp+7;
			printf("%s\n",day[temp]);
		}
		else if(M==5)
		{
			temp=(D-9)%7;
			if(temp<0)
				temp=temp+7;
			printf("%s\n",day[temp]);
		}
		else if(M==6)
		{
			temp=(D-6)%7;
			if(temp<0)
				temp=temp+7;
			printf("%s\n",day[temp]);
		}
		else if(M==7)
		{
			temp=(D-11)%7;
			if(temp<0)
				temp=temp+7;
			printf("%s\n",day[temp]);
		}
		else if(M==8)
		{
			temp=(D-8)%7;
			if(temp<0)
				temp=temp+7;
			printf("%s\n",day[temp]);
		}
		else if(M==9)
		{
			temp=(D-5)%7;
			if(temp<0)
				temp=temp+7;
			printf("%s\n",day[temp]);
		}
		else if(M==10)
		{
			temp=(D-10)%7;
			if(temp<0)
				temp=temp+7;
			printf("%s\n",day[temp]);
		}
		else if(M==11)
		{
			temp=(D-7)%7;
			if(temp<0)
				temp=temp+7;
			printf("%s\n",day[temp]);
		}
		else if(M==12)
		{
			temp=(D-12)%7;
			if(temp<0)
				temp=temp+7;
			printf("%s\n",day[temp]);
		}
	}
	return 0;
}
