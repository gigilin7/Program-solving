//�o�ӬO��J�ⵧ��ƫ�n����(��Enter)�~���~���J�U�ⵧ��� (�P�D�ؿ�J�榡����) 
//��X��Ʀr�ۥ[���X���i��A���J0 0�N����  
#include <stdio.h>
#include <string.h>
int main(void)
{
	int carry=0,total[100]={0},temp=0,i=0,j=0,k=0,l=0;
	char c[100]="No carry operation.",c2[100]="1 carry operation.",c3[100]=" carry operations.";
	char number[3][11]={0},num[11];
	for(l=0;;l++)
	{
		gets(num);
		if(num[0]=='0')//��J0�����{�� 
			break;
		strrev(num);//�N��J���Ʀr�˹L�Ӧs 
		for(i=0;i<3;i++)//�Nnumber�̪��Ȫ�l�� 
		{
			for(j=0;j<11;j++)
			{
				number[i][j]=0;
			}
		}
		for(i=0,j=0,k=0;i<strlen(num);i++,k++)//�Nnum���Ȧs��number�� 
		{
			number[j][k]=num[i];//number[0][]�O�s�ť���e���Ʀr�Anumber[1][]�O�s�ť���᪺�Ʀr
			if(num[i]==' ')//�p�G��J�ť���A�N��U��num���ȭn�s��number[1][]�� 
			{
				j++;
				k=-1;//�]��k�|��++�A�ҥH�n����-1�~����k=0�h���� 
			}
		} 
		temp++;//�Ʀ��X���Ʀr�ۥ[ 
		for(i=0,carry=0;i<11;i++)
		{                                  //�ۥ[�Y�j��9�|�i��A�]�Φr���s�A�ҥH�n��Ascii code��� 
			if(number[0][i]+number[1][i]>105||number[0][i]==58)//51�O3��Ascii code�A54�O6��Ascii code 
			{                                                 //�ҥH105�O3+6��Ascii code�A58�O10��Ascii code 
				carry++;//�⦳�X���i��                       
				number[0][i+1]++;//�Y���i��A�U�Ӧ�ƪ��Ʀr+1 
			}
		}
		total[l]=carry;//total�s�C�լۥ[�����i��X������ 
		carry=0;//�C�խp�⧹�i��X����n�k0�A�~���~��p��U�@�տ�J 
	}
	for(i=0;i<temp;i++)//��X���G 
	{
		if(total[i]==0)
			printf("%s\n",c);
		else if(total[i]==1)
			printf("%s\n",c2);
		else
			printf("%d%s\n",total[i],c3);
	}
	return 0;
} 
