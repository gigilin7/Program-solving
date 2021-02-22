//算 k的值(k的n次方=p)
//用double 
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double n,p;
	while(cin>>n>>p)
	{
		printf("%.lf\n",pow(p,1.0/n));
	}
} 
