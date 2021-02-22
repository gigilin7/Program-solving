//判斷輸入的數字是不是質數，如果他是質數，判斷他的相反數(reverse)是不是也是質數 
#include <stdio.h>
int prime(int num)//質數是1，不是質數就0 
{
	int i;
	if(num==1)
		return 0;
	else
	{
		for(i=2;i<=num/2;i++)//除以2是因為只需要判斷一半就好(可節省時間) 
		{
			if(num%i==0)
				return 0;
		}
	}
	return 1;
}
int main(void)
{
	int n,n1,n2;
	while(scanf("%d",&n)!=EOF)
	{
		n1=n;
		n2=0;
		while(n!=0)//reverse(如123變321) 
		{
			int temp=n%10;
			n2=n2*10+temp;
			n=n/10;
		}
		if(prime(n1)&&prime(n2)&&n1!=n2)
			printf("%d is emirp.\n",n1);
		else if(prime(n1))
			printf("%d is prime.\n",n1);
		else
			printf("%d is not prime.\n",n1);
	}
	return 0;
}
