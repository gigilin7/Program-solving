//找中位數(要記得排序) 
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n,count=0,num[10000]={0},mid;
	while(cin>>n)
	{
		num[count]=n;
		count++;
		sort(num,num+count);
		if(count%2==1)
		{
			mid=num[count/2];
		}
		else
		{
			mid=(num[count/2-1]+num[count/2])/2;
		}
		cout<<mid<<'\n';
	}
} 
