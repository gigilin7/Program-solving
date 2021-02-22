//算每個數字出現的次數 
#include <iostream>
using namespace std;
int main()
{
	int n,count=0,num[10000]={0},time[10000]={0};
	while(cin>>n)
	{
		int flag=1;
		for(int i=0;i<count;i++)
		{
			if(n==num[i])
			{
				flag=0;
				time[i]++;
				break;
			}
		}
		if(flag)
		{
			num[count]=n;
			time[count]++;
			count++;
		} 
	}
	for(int i=0;i<count;i++)
	{
		cout<<num[i]<<" "<<time[i]<<'\n';
	}
} 
