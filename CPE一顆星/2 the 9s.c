//Ū���@�Ʀr�A�p��ӼƦr�O�_���E�����ơH�p�O�A�A�p��䶥�h��
//�p�ⶥ�h�ơG�Ҧ���Ƭۥ[��o�X���Ĥ@���`�M���@���A�̦���������ӼƦr�L�k�A�p���`�M�C
//�Ҥl:999 => 27(9+9+9, 1��) => 9(2+7, 2��) 
#include <stdio.h>
#include <string.h>
int main(void)
{
	int i,deg;
	char num[1000];
	while(strcmp(num,"0")!=0)
	{
		char num[1000]={0};
		int sum=0,temp=0;
		scanf("%s",num);
		if(strcmp(num,"0")==0)//��J0���� 
			break;
		for(i=0;i<strlen(num);i++)
		{
			sum=sum+(num[i]-'0');//�r���ഫ���Ʀr�å[�` 
		}
		if(sum%9!=0)
		{
			printf("%s is not a multiple of 9.\n",num);
		}	
		else
		{
			deg=1;//���h�� 
			while(sum>9)
			{
				while(sum>0)
				{
					temp=temp+(sum%10);
					sum=sum/10;
				}
				if(temp%9==0)
					deg++;
				sum=temp;
				temp=0; 
			}
			printf("%s is a multiple of 9 and has 9-degree %d.\n",num,deg);
		}	
	}
	return 0;
}
