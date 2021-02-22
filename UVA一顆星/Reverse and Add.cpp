//算reverse相加次數 & 相加總和
//數字大需用unsigned int 
#include <iostream> 
using namespace std;
unsigned int reverse(unsigned int p)
{
	unsigned int rev=0;
	while(p!=0)
		{
			int temp=p%10;
			rev=rev*10+temp;
			p=p/10;
		}
	return rev;
}
int main()
{
	unsigned int n,p;
	cin>>n;
	while(n--)
	{
		cin>>p;
		unsigned int sum=p,count=0;
		while(1)
		{
			sum=sum+reverse(sum);
			count++;
			if(sum==reverse(sum))
				break;
		}
		cout<<count<<" "<<sum<<'\n';
	}
}
