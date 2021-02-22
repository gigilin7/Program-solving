//例外:
//輸入:900000000000000
//正確輸出:    1. 9 kuti kuti
//錯誤輸出:   1. 9 kuti 0 kuti 
#include <iostream>
using namespace std;
void Bangla(long long n)
{
	if(n>=10000000)
	{
		Bangla(n/10000000);
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
	if(n!=0)
	{
		printf(" %lld",n);
	}
}
int main()
{
	long long n;
	int i=1;
	while(cin>>n)
	{
		printf("%4d.",i++);
		if(n==0)
			printf(" 0");
		else
			Bangla(n);
		printf("\n");
	}
} 
