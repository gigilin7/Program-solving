//�D��:��X N(2~62) �i�쪺�Ʀr�A�åB��n�i�H�QN-1���㰣�C�䤤A~Z��10~35��ܡBa~z��36~61���
//���]:�Y�� X �� n �Ӧ�ơA�C�Ӧ�ƪ��`�M�� k �����ơA�� X �� N �i��A�B N=k+1
//�|��:�H10�i�쬰�ҡA�C�Ӧ�Ƭۥ[�p�G�O9�����ơA����N�i�H�Q9�㰣
//����: �� N=k+1 �A�B�C�Ӧ�ƪ��`�M�� k �����ơA�h X �b N �i��ɥi�H�Q k �㰣
#include <stdio.h>
#include <string.h>
int main(void)
{
	int i=0;
	char input[100]={0};
	while(gets(input))
	{
		int R=0;//�D�N:��0~61���
		int sum=0;
		int max=1;//�]���C�Ӧ�Ƥ��̤j�����ެO0��1�A���׳��O�G�i��A�ҥHmax��������1 
		for(i=0;i<strlen(input);i++)//�r����ASCII�X�ഫ���ŦX�D�N�Ʀr 
		{
			if(input[i]>='0' && input[i]<='9')//0~9 
				R=input[i]-'0';
			else if(input[i]>='A' && input[i]<='Z')//10~35 
				R=input[i]-'A'+10;
			else if(input[i]>='a' && input[i]<='z')//36~61 
				R=input[i]-'a'+36;
				
			sum=sum+R;//�C�Ӧ�ƪ��`�M
			if(R>max)//��X�C�Ӧ�Ƥ��̤j��(�ݷ|����l�򩳤��i�p��)(����n���ӧP�_�O�X�i��) 
				max=R;
		}
		for(i=max;i<=62;i++)//�]�D�ػ��̦h�u��62�i�� 
		{
			if(i==62)//�p�G�O62������(�Q62�㰣)�A�N������63�i��(���X�D�N) 
			{
				printf("such number is impossible!\n");
				break;
			}
			
			if(sum%i==0)
			{
				printf("%d\n",i+1);
				break;
			}
		}
		
		
	}
	return 0;
}
