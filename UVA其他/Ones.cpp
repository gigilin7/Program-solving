//ノ緇计疭┦ㄓ秆肈
//1%3 = 0 緇 1 (暗程蔼緇计)
//11%3 = 3 緇 2 (1)
//21%3 = 7 緇 0 (1)
//眔氮琌111琌3计┮digits琌3
#include <iostream>
using namespace std;
int main()
{
	int n,temp;
	while(cin>>n)
	{
		int count=0;
		temp=1%n;
		count++;
		while(temp!=0)
		{
			temp=(temp*10+1)%n;
			count++;
		}
		cout<<count<<'\n';
	}
} 
//稱猭把σ:
//http://kos74185foracm.blogspot.com/2011/12/10127-ones.html 
