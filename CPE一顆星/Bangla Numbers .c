//��@�ռƦr�ӥε{���Ѧ��Τf�y��F���ˤl
//Bangla�Ƴq�`�|��'kuti' (10000000), 'lakh' (100000), 'hajar' (1000), 'shata' (100)��� 
#include <stdio.h>
void Bangla(long long n)//�Ʀr�Ӥj�A�ҥH��long long 
{
		if(n>=10000000)
		{
			Bangla(n/10000000);//�λ��j���覡�@���I�sfunction���B�� 
			printf(" kuti");
			n=n%10000000;
		}
		if(n>=100000)
		{
			Bangla(n/100000);
			printf(" lakh");
			n=n%100000;
		}
		if(n>=1000)
		{
			Bangla(n/1000);
			printf(" hajar");
			n=n%1000;
		}
		if(n>=100)
		{
			Bangla(n/100);
			printf(" shata");
			n=n%100;
		}
		if(n!=0)//����100���Ʀr 
		{
			printf(" %lld",n);
		}
}
int main(void)
{
	int i;
	long long num,n;
	for(i=1;scanf("%lld",&num)!=EOF;i++)
	{
		printf("%4d.",i);//�L�D�� (%4d�O�]���D�حn�D) 
		if(num==0)
			printf(" 0");
		else
			Bangla(num);
		
		printf("\n");
		
	}
	return 0;
}
