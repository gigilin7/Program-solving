//�p����J�Ʀr�������_�ƩM(�p1��5�����O1+3+5=9�A2��5�����O3+5=8) 
#include <stdio.h>
int main(void)
{
	int i,j,n,a,b,sum;
	scanf("%d",&n);//���X�տ�J(�@�զ���ӼƦr) 
	for(i=1;i<=n;i++)
	{
		sum=0;
		scanf("%d%d",&a,&b);
		if(a%2==0)//�p�G�O���� 
			a=a+1;
		for(j=a;j<=b;j=j+2)
		{
			sum=sum+j;
		}
		printf("Case %d: %d\n",i,sum);
	}
	return 0;
}
