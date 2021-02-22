//3瓶空可樂罐可換1瓶可樂(計算共喝了幾瓶可樂)
//如果只差1瓶空瓶，可向朋友借1瓶拿去換(借的不算有喝) 
#include <stdio.h>
int main(void)
{
	int n,a;
	while(scanf("%d",&n)!=EOF)//原本有幾瓶可樂 
	{
		int sum=n;
		while(n!=1)
		{
			a=n/3;//a是換了幾瓶 
			n=n-(3*a)+a;//剩下幾瓶 
			if(n==2)//若剛好只剩2瓶就去借1瓶 
				n++;
			sum=sum+a;
		}
		printf("%d\n",sum);
	}
	return 0;
}
