//�C�ӬF�ҳ����o��t�����g��
//�u�n�P����(1)~�P���|(5)�ӤѦ�����@�ӬF�Һt���Ahartal�ƥشN+1
//��@���X�Ѧ��t�� 
#include <stdio.h>
#include <string.h>
int main(void)
{
	int T,N,P,h,i=0,j=0,k=1,l=0,hartals=0,day[100]={0},kh=0,work[3651]={0};
	scanf("%d",&T);//���X�ո�ƭn�B�� 
	for(i=0;i<T;i++)
	{
		int work[3651]={0};
		scanf("%d",&N);//�@���X�� 
		scanf("%d",&P);//�X�ӬF�� 
		for(j=0;j<P;j++)
		{
			scanf("%d",&h);//�C�ӬF�Ҫ��t���g�� 
			for(k=1;k*h<=N;k++)
			{
				kh=(k*h)%7;//���l�ƨӧP�_�O�P���X 
				work[k*h]++;
				if(kh==6||kh==0)//�Y�O�P�����άP�����A�N���� 
					work[k*h]=0;
			}
		}
		for(l=0;l<3651;l++)
		{
			if(work[l]>0)//�j��0�N��ܤ֦��@�F�Ҫ��t���A�ӥB���O�b�P������ 
				hartals++;
		}
		day[i]=hartals;//�s�C�զ��X�Ѧ��t�� 
		hartals=0;
		kh=0;
		
	}
	for(i=0;i<T;i++)//�L�X���G 
	{
		printf("%d\n",day[i]);
	}
	return 0;
}
