//�q��J(1 -1)���h����(x-1)����X�L���᪺�h����(1)�A�ñNx�N�J�L�X���� 
#include <stdio.h>
int main(void)
{
	int x,a;
	char c;
	while(scanf("%d",&x)!=EOF)
	{
		int ans=0,sum=0;
		char c=0;
		while(c!='\n')
		{
			scanf("%d",&a);
			// ���D���n�Ѫk 
			ans=ans*x+sum;
			sum=sum*x+a;
			// 
			c=getchar();//���F�P�_a����J�O�_���� 
			
		}
		printf("%d\n",ans);
	}
	return 0;
}
