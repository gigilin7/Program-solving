//�q�{���ϧΤ���X�����I(r,c)�V�~�X�i���̤j��������
//(������Τ����C�Ӧr�������򤤤��I���r�@��) 
#include <stdio.h>
#include <string.h>
int main(void)
{
	int i,j,k,l,n,M,N,Q,r,c;
	char square[100][100];
	scanf("%d",&n);//�X�� 
	for(l=0;l<n;l++)
	{
		scanf("%d%d%d",&M,&N,&Q);//���e�d��+�X�Ӵ��դ����I 
		for(i=0;i<M;i++)
		{
			scanf("%s",&square[i]);//��J�{���ϧ� 
		}
		printf("%d %d %d\n",M,N,Q);
		while(Q--)
		{
			scanf("%d%d",&r,&c);//��J�����I�y�� 
			int temp=0,ans=1;
			for(k=0;k<M||k<N;k++)//k=0��1*1,k=1��3*3...�H������ 
			{
				for(i=r-k;i<=r+k;i++)
				{
					for(j=c-k;j<=c+k;j++)
					{
						if(i<0||j<0||i>M||j>N)//�W�X���e�d�� 
						{
							temp=1;
							break;
						}
						if(square[i][j]!=square[r][c])//�r���@�� 
						{
							temp=1;
							break;
						}
					}
				}
				if(temp==0)//�C�ݤ@�h����δN��@������ 
				{
					ans=k*2+1;
				}
				else
					break;
			}
			printf("%d\n",ans);
		}
	}
	return 0;
}
