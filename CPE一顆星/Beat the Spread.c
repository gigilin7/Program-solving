//s=big+small, d=big-small, �L�Xbig��small(�������O�����) 
#include <stdio.h>
int main(void)
{
	int n,s,d,i,big,small;
	scanf("%d",&n);//���X��(�@�զ��@��s�@��d�h���P�_) 
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&s,&d);
		if(s<=d) //s���j��d
		{
			printf("impossible\n");
		}	
		else
		{
			big=(s+d)/2;
			small=s-big;
			if((big-small)!=d) //���F���T�p�⹳�Os=100,d=1���Ҥl 
				printf("impossible\n");
			else
				printf("%d %d\n",big,small);
		}
	}
	return 0;
}
