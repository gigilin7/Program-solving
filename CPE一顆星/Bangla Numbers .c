//把一組數字來用程式解成用口語表達的樣子
//Bangla數通常會用'kuti' (10000000), 'lakh' (100000), 'hajar' (1000), 'shata' (100)表示 
#include <stdio.h>
void Bangla(long long n)//數字太大，所以用long long 
{
		if(n>=10000000)
		{
			Bangla(n/10000000);//用遞迴的方式一直呼叫function做運算 
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
		if(n!=0)//不到100的數字 
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
		printf("%4d.",i);//印題號 (%4d是因為題目要求) 
		if(num==0)
			printf(" 0");
		else
			Bangla(num);
		
		printf("\n");
		
	}
	return 0;
}
