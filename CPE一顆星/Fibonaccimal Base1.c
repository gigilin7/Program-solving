//锣传计ノ(癸莱锣传玡计程143) 
#include <stdio.h>
int main(void)
{
	int n,num,number,i,j,temp;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&num);
		number=num;
		int f[100]={0},count=2,a=1,b=2;
		f[0]=1;
		f[1]=2;
		for(i=2;num>=3;i++)
		{
			if(num==1||num==2)
				break;
			f[i]=a+b;
			a=b;
			b=f[i];
			if(num<f[i])
				break;
			count++;
			
		}
		int ans=0;
		for(i=0,j=count-1;j>=0;i++,j--)
		{
			temp=num/f[j];
			ans=ans*10+temp;
			if(num>=f[j])
				num=num-f[j];
		}
		if(num==1)
			printf("%d = 1 (fib)\n",number);
		else if(num==2)
			printf("%d = 10 (fib)\n",number);
		else
			printf("%d = %d (fib)\n",number,ans);
	}
	return 0;
}
