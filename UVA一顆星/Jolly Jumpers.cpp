//c++版 
//題目:相鄰的2個數其差的絕對值恰好為1到n-1 --> Jolly 
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		int flag=1,num[3000]={0},jolly[3000]={0};
		for(int i=0;i<n;i++)
		{
			cin>>num[i];
		}
		for(int i=1;i<n;i++)
		{
			jolly[abs(num[i]-num[i-1])]=1;
		}
		for(int i=1;i<n;i++)
		{
			if(jolly[i]!=1)
			{
				flag=0;
				break;
			}
		}
		if(flag==0)
			cout<<"Not jolly\n";
		else
			cout<<"Jolly\n";
	}
} 
