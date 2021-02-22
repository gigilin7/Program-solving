//衡Τn计ê计3计㎝
//2*row-1=n,row=(n+1)/2
//材rowΤrow*row计
#include <iostream>
using namespace std;
int main()
{  
	long long n,row,sum;
	while(cin>>n)
	{
		row=(n+1)/2;
		sum=(2*row*row-1)+(2*row*row-3)+(2*row*row-5);
		//ê程计  计材    计材 
		cout<<sum<<'\n';
	}
} 
