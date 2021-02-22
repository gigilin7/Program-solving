//每個政黨都有發表演講的週期
//只要星期日(1)~星期四(5)該天有任何一個政黨演講，hartal數目就+1
//算共有幾天有演講 
#include <stdio.h>
#include <string.h>
int main(void)
{
	int T,N,P,h,i=0,j=0,k=1,l=0,hartals=0,day[100]={0},kh=0,work[3651]={0};
	scanf("%d",&T);//有幾組資料要運算 
	for(i=0;i<T;i++)
	{
		int work[3651]={0};
		scanf("%d",&N);//共有幾天 
		scanf("%d",&P);//幾個政黨 
		for(j=0;j<P;j++)
		{
			scanf("%d",&h);//每個政黨的演講週期 
			for(k=1;k*h<=N;k++)
			{
				kh=(k*h)%7;//取餘數來判斷是星期幾 
				work[k*h]++;
				if(kh==6||kh==0)//若是星期五或星期六，就不算 
					work[k*h]=0;
			}
		}
		for(l=0;l<3651;l++)
		{
			if(work[l]>0)//大於0代表至少有一政黨的演講，而且不是在星期五跟六 
				hartals++;
		}
		day[i]=hartals;//存每組有幾天有演講 
		hartals=0;
		kh=0;
		
	}
	for(i=0;i<T;i++)//印出結果 
	{
		printf("%d\n",day[i]);
	}
	return 0;
}
