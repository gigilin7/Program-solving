//�P�_��J�Ʀr�����Ƕi��������O�̤�? 
//��J�Ʀr�n���ഫ��2��36�i���A�íp��C�Ӷi���Ʀr�`��O�A�M��h����� 
#include <stdio.h>
#include <string.h>
int main(void)
{
	int n,m,i,j,k,l,num;
	scanf("%d",&n);//���X��case 
	for(i=1;i<=n;i++)
	{
		if(i>1)
			printf("\n");
		printf("Case %d:\n",i);
		int money[37]={0};
		for(j=0;j<36;j++)//money�N��Ʀr0��35����O(�p0�O1$�A1�O3$����) 
		{
			scanf("%d",&money[j]);
		}
		scanf("%d",&m);//1��case���X�տ�J�Ʀr 
		while(m--)
		{
			int base[37]={0},min=1000000000;
			scanf("%d",&num);//��J�Ʀr 
			for(k=2;k<=36;k++)//2��36�i���
			{
				int num1=num;
				int change=0,sum=0;
				while(num1!=0)
				{
					change=num1%k;//change�O�ഫ�L�᪺�C�@��� 
					num1=num1/k;
					sum=sum+money[change];//sum�O�Ʀr�ഫ�᪺�`��O 
				}
				if(sum<min)//min�O�s�Y�i���̤p��O�Abase�O�s�̤p��O���O���Ƕi���
				{
					min=sum;
					base[0]=k;//�Ĥ@�Ӧ�m������ 
					l=1;
				}
				else if(sum==min)
				{
					base[l]=k;//��L��m�p�G��O��Ĥ@�Ӧ�m�@�˴N�����A���@�˴N���� 
					l++;
				}
			}
			printf("Cheapest base(s) for number %d:",num);
			for(j=0;j<l;j++)
			{
				printf(" %d",base[j]);
			}
			printf("\n");
		}
	}
	return 0;
}
