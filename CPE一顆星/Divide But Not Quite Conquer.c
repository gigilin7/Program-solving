//��J2�ӼƦrn,m�A�P�_n�O�_��m��x���� (��J�Ʀr�W�Lint�d��A�ҥH��long long)
//��J:125 5  ��X:125 25 5 1
//��J:100 2  ��X:Boring! 
#include <stdio.h>
#include <math.h>
int main(void)
{
	long long i,n,m;
	while(scanf("%lld %lld",&n,&m)!=EOF)
	{
		int fun=0;
		long long output[200]={0};
		output[0] = n;
		for(i=1;;i++)//�q1�}�l�A�]��0�w�g��n�ȤF(�W1��) 
		{
			output[i]=n/pow(m,i);
			if(output[i-1]%m!=0&&output[i-1]!=1)
			{
				fun=0;
				break;
			}
			else
			{
				fun=1;
			}
			if(output[i]==1)
				break;
		}
		
		for(i=0;;i++)
		{
			if(fun==0)
			{
				printf("Boring!");
				break;
			}
			else
			{
				printf("%lld",output[i]);
				if(output[i]!=1)
					printf(" ");
			}
			if(output[i]==1)
				break;
		}
		printf("\n");
	}
	return 0;
}
