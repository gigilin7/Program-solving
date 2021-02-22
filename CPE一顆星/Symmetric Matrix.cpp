//c++ª© 
#include <iostream>
using namespace std;
int main()
{
	int n,N,count=1;
	char c[2];
	long long num[10000]={0},num1[10000]={0};
	cin>>n;
	while(n--)
	{
		int flag=1;
		scanf("%s%s%d",c,c,&N);
		for(int i=0;i<N*N;i++)
		{
			cin>>num[i];
			if(num[i]<0)
				flag=0;
		}
		for(int i=0,j=N*N-1;i<N*N,j>=0;i++,j--)
		{
			num1[i]=num[j];
			if(num[i]!=num1[i])
			{
				flag=0;
				break;
			}
		}
		printf("Test #%d: ",count++);
		if(flag==0)
			printf("Non-symmetric.\n");
		else
			printf("Symmetric.\n");
	}
} 
