//�P�_�}�C�O�_��٥B�D�t
//�Y�}�C��Symmetric�A�h���}�C�Φ��j��(�p:5 1 3 2 0 2 3 1 5) 
#include <stdio.h>
int main(void)
{
	int n,i,j,k,N;
	long long num[10000]={0},num1[10000]={0};
	char a[2];
	scanf("%d",&n);//���X�� 
	for(i=1;i<=n;i++)
	{
		int flag=1;//�P�_���аO 
		scanf("%s%s%d",&a,&a,&N);//�]�D�حn�D����J�ON = ?(�ҥH�n���ܼ�a�~�i��J) 
		for(j=0;j<N*N;j++)//�YN = 3�A�h�}�C��3*3(�Τ@���s) 
		{
			scanf("%lld",&num[j]);
			if(num[j]<0)
				flag=0;
		}
		for(j=0,k=N*N-1;j<N*N,k>=0;j++,k--)
		{
			num1[j]=num[k];//num1�s�˹L�Ӫ�num 
			if(num[j]!=num1[j])
			{
				flag=0;
				break;
			}
		}
		printf("Test #%d: ",i);
		if(flag==0)
			printf("Non-symmetric.\n");
		else
			printf("Symmetric.\n");
		
	}
	return 0;
} 
