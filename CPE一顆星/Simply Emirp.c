//�P�_��J���Ʀr�O���O��ơA�p�G�L�O��ơA�P�_�L���ۤϼ�(reverse)�O���O�]�O��� 
#include <stdio.h>
int prime(int num)//��ƬO1�A���O��ƴN0 
{
	int i;
	if(num==1)
		return 0;
	else
	{
		for(i=2;i<=num/2;i++)//���H2�O�]���u�ݭn�P�_�@�b�N�n(�i�`�ٮɶ�) 
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
		while(n!=0)//reverse(�p123��321) 
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
