//c++ª© 
#include <iostream>
using namespace std;
int main()
{
	long long S,D,i;
	while(cin>>S>>D)
	{
		long long sum=0;
		for(i=S;i<D;i++)
		{
			sum=sum+i;
			if(sum>=D)
				break;
		}
		cout<<i<<'\n';
	}
}
