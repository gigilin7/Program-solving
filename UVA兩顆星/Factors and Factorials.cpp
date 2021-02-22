//猔種:–计璶3丁15计璶传︽6フ
//羭ㄒ: 
//块:5 
//块:  5! =  3  1  1
#include <iostream>
using namespace std;
int main()
{
	int n;
	int prime[25]={2,3,5,7,11,13,17,19,23,29,31,
	37,41,43,47,53,59,61,67,71,73,79,83,89,97};
	while(cin>>n)
	{
		int sum[100]={0};
		if(n==0)
			break;
		for(int i=2;i<=n;i++)
		{
			int k=i;
			while(k>1)
			{
				for(int j=0;j<25;j++)
				{
					if(k%prime[j]==0)
					{
						k=k/prime[j];
						sum[prime[j]]++;
						break;
					}
				}
			}
		}
		printf("%3d! =",n);
		int count=0;
		for(int i=2;i<=n;i++)
		{
			if(sum[i]!=0)
			{
				if(count==15)//猔種 
				{
					printf("\n      ");
					count=0;
				}
				printf("%3d",sum[i]);
				count++;
			}
			if(i==97)//借计程97(100ず) 
				break;
		}
		printf("\n");
	}
}
