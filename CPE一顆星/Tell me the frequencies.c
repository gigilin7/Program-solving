//�r���ഫ��ASCII�X�A�íp�⦳�X�� 
#include <stdio.h>
#include <string.h>
int main(void)
{
	int output[130]={0},max=0,n=0,i=0,j=0;
	char input[1000]={0};
	while(gets(input))
	{
		int output[130]={0};//��l�� 
		int max=0;
		
		if(n==1)//���n�b��J�U�ӭȤ~�n�L���� 
			printf("\n");
		
		for(i=0;i<strlen(input);i++)//�p��r���ഫ��ASCII�X��A�X�{�X�� 
		{
			output[input[i]]++;
		}
		
		for(i=0;i<130;i++)//��X�̰����ƪ��O�X��(max) 
		{
			if(output[i]>max)
				max=output[i];
		}
		
		for(i=1;i<=max;i++)//�L�X����:�Ѧ��Ƥ֨�h�A�p�G���Ƥ@�ˡAASCII�X�j���ƫe�� 
		{
			for(j=123;j>=0;j--)//�ҥH�n�q�j��ASCII�X�}�l��(ASCII�X123�Oz) 
			{
				if(output[j]==i)
					printf("%d %d\n",j,output[j]);
			}
		}
		
		n=1;//���ӼаO�A�~�i�P�_��X���G��n���n���� 
	}
	
	return 0;
}
 
