//算有幾次進位 
#include <iostream>
using namespace std;
int main()
{
	int a,b,a1,b1;
	while(cin>>a>>b)
	{
		int sum=0,carry=0;
		if(a==0&&b==0)
			break;
		while(a!=0||b!=0)
		{
			a1=a%10+carry;
			b1=b%10;
			a=a/10;
			b=b/10;
			if(a1+b1>=10)
			{
				sum++;
				carry=1;
			}
			else
			{
				carry=0;
			}
		}
		if(sum==0)
			cout<<"No carry operation.\n";
		else if(sum==1)
			cout<<"1 carry operation.\n";
		else
			cout<<sum<<" carry operations.\n";
		
	}
} 
