//�g�@�ӭp��GCD(�̤j���]��)��function�A�îM�J�D�ص��������o�X����(G)  
#include <stdio.h>
int GCD(int m, int n) 
{
	while(n!=0)//����۰��k 
	{
		int r=m%n;
		m=n;
		n=r;
	}
	return m;
}

int main(void)
{
	int N,i,j;
	while(scanf("%d",&N)!=0)
	{
		if(N==0)
			break;
		int G=0;
		for(i=1;i<N;i++)//�D�ص������� 
		{
			for(j=i+1;j<=N;j++)
			{
				G+=GCD(i,j);
			}
		}
		printf("%d\n",G);
	}
	return 0;
} 
