//计猭(材︽+材︽) 
//猔種:计び璶main 
#include <iostream>
using namespace std;
int a[1000005],b[1000005];
int main()
{
	int n,m;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&m);//碭计 
		a[1000001]={0};
		b[1000001]={0};
		for(int i=m-1;i>=0;i--)
		{
			scanf("%d%d",&a[i],&b[i]);
		}
		for(int i=0;i<m;i++)
		{
			if(a[i]+b[i]>9)
			{
				a[i+1]++;
				a[i]=(a[i]+b[i])%10;
			}
			else
				a[i]=a[i]+b[i];
		}
		
		if(a[m]==1)//璝程计Τ秈璶ㄓ 
			printf("%d",a[m]);
				 
		for(int i=m-1;i>=0;i--)
		{
			printf("%d",a[i]);
		}
		printf("\n");
		if(n)
			printf("\n");
	}
} 
