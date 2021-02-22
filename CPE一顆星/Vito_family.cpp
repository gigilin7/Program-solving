//完成版(自己寫) 
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n,n2,num[1000];
	cin>>n;
	while(n--)
	{
		cin>>n2;
		num[1000]={0};
		for(int i=0;i<n2;i++)
		{
			cin>>num[i];
		}
		sort(num,num+n2);
		int mid=num[n2/2];
		int sum=0;
		for(int i=0;i<n2;i++)
		{
			sum=sum+abs(mid-num[i]);
		}
		cout<<sum<<endl;
	}
	
} 
