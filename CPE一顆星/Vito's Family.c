//�쥻�S���D�A�{�b���G�|�X��(�ҥH���Ѧ�C++������) 
//��@�����Ҧ��˱��a�̪񪺩Фl(�䤤���)
//�ϱo�L���X�Ҧ��˱��ɡA�Z�����`�M�O�̤p�� (�˱��̦h500��) 
#include <stdio.h>
#include <stdlib.h>//abs(�̭������ܵ����) 
int main(void)
{
	int n=0,number[10]={0},i=0,j=0,k=0,total[500]={0},n2=0,best=0,temp=0;
	scanf("%d",&n);//�M�w���X�ո�� 
	for(k=0;k<n;k++)
	{
		scanf("%d",&n2);//�M�w���X���Фl(�]��ۤv��˱�) 
		for(i=0;i<n2;i++)
		{
			scanf("%d",&number[i]);//�Фl���s�� 
		}
		for(i=0;i<n2-1;i++)//bubble sort(���C���Фl�ѽs���p��j�Ƨ�) 
		{
			for(j=0;j<n2-1-i;j++)
			{
				if(number[j]>number[j+1])
				{
					temp=number[j];
					number[j]=number[j+1];
					number[j+1]=temp;
				}
			}
		}
		
		if(n2%2==0)//���� 
			best=n2/2-1;//best�O����ơA�n��1�O�]���Ĥ@�ӿ�J���ȬO��b0����m 
		else
			best=n2/2;
			
		for(i=0;i<n2;i++)//��̤p�Z���`�M(����ƴ�C�@��ƪ��Ȭۥ[) 
		{
			total[k]=total[k]+abs(number[best]-number[i]);
		}
		int number[500]={0};//��l��(�k0) 
		temp=0;//��l�� 
	}
	for(i=0;i<n;i++)//�L���G 
	{
		printf("%d\n",total[i]);
	}
	
	return 0;
}
