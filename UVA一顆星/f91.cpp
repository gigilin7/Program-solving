//依題目規則(N<=100的值都是91) 
#include <iostream>
using namespace std;
int main()
{
	int N;
	while(cin>>N&&N)
	{
		if(N<=100)
			printf("f91(%d) = 91\n",N);
		else
			printf("f91(%d) = %d\n",N,N-10);
	}
} 
