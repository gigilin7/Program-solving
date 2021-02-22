#include <iostream>
using namespace std;
void quirksome(int n)
{
	int m=1;
	for(int i=0;i<n/2;i++)
	{//2计:10,4计:100,6计:1000,8计:10000
		m=m*10; 
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			if((i+j)*(i+j)==i*m+j)
			{
				for(int k=10;k<m;k*=10)
				{
					if(i/k==0)
						cout<<'0';
				}
				cout<<i;
				for(int k=10;k<m;k*=10)
				{
					if(j/k==0)
						cout<<'0';
				}
				cout<<j<<'\n';
			}
		}
	}
}
int main()
{
	int n;
	while(cin>>n)
	{
		quirksome(n);
	}
} 
