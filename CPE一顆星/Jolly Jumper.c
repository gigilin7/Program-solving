//�D��:�۾F��2�Ӽƨ�t������ȫ�n��1��n-1 --> Jolly 
#include <stdio.h>
#include <stdlib.h>//abs(���̭����ȬO�����) 
int main(void)
{
	int number[3000]={0},jolly[3000]={0},i=0,j=0,n=0,temp=1,total[100]={0},count=0;
	for(j=0;scanf("%d",&n)!=EOF;j++)//�Ĥ@�ӿ�J���Ʀrn�O�����᭱�|���X�ӼƦr 
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",&number[i]);
		}
		for(i=0;i<n;i++)
		{
			jolly[abs(number[i+1]-number[i])-1]=1;
			//����@�ӼƦr��e�@�ӼƦr���t���@�ӼаO 
		}
		for(i=0,temp=1;i<n-1;i++)//i<n-1�O�]���D�ػ�1��n-1 
		{
			if(jolly[i]==0)//�p�G���䤤�@�Ӯt�S�Q�аO��A�N��temp����0 
			{
				temp=0;
			}
		}
		if(temp==1) 
			total[j]++;//���̭��s���@�ռƦr�Ojolly���N��1�A���O�N����0 
		temp=1;//��l�n�]��1 
		for(i=0;i<10;i++)//��l��(�k0) 
		{
			number[i]=0;
			jolly[i]=0;
		}
		count++;//���`�@���X�� 
	}
	
	for(i=0;i<count;i++)//�L���G�X�� 
	{
		if(total[i]==1)
			printf("Jolly\n");
		else
			printf("Not jolly\n");
	}
	
	
	return 0;
}
