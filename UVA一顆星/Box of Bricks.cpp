//算要搬多少個積木到別堆去 
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,h[100],num=1;
	while(cin>>n)//有幾堆積木 
	{
		int sum=0,count=0;
		if(n==0)
			break;
		for(int i=0;i<n;i++)
		{
			cin>>h[i];//每堆積木有幾個 
			sum+=h[i];
		}
		for(int i=0;i<n;i++)
		{
			if(h[i]>sum/n)
				count+=abs(h[i]-sum/n);
		}
		cout<<"Set #"<<num++<<'\n';
		cout<<"The minimum number of moves is "<<count<<".\n\n";//記得要兩個換行 
	}
}
