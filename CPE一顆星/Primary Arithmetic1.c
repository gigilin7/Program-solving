//�o�ӬO�C����Ƴ��O�Ϊť���j�}�A���t��B�� (�P�D�ؿ�J�榡�ŦX) 
//��X��Ʀr�ۥ[���X���i��A���J0 0�N����  
#include <stdio.h>
#include <string.h>
int main(void)
{
	int i=0,j=0,a=0,b=0,temp=0,carry[15]={0},count=0,a1=0,b1=0;
	char c[100]="No carry operation.",c2[100]="1 carry operation.",c3[100]=" carry operations.";
	for(j=0;;j++)
	{
		scanf("%d",&a);
		scanf("%d",&b);
		if(a==0)//��J0�����{�� 
			break;
		a1=a%10;
		b1=b%10;
		for(i=0;;i++)
		{
			if((a1+b1)>=10)
			{
				temp++;//�⦳�X���i��
				a=a/10;
				b=b/10;
				a1=a%10;
				b1=b%10;
				a1++;//�]�����i��A�ҥH�U�@���+1 
			}
			else 
			{
				a=a/10;
				b=b/10;
				a1=a%10;
				b1=b%10;
			}
			if(a<=1&&b<=1)
				break;
			
		}
		carry[j]=temp;//carry�s�C�լۥ[�����i��X������ 
		temp=0;
		a=0;
		b=0;
		count++;//�Ʀ��X���Ʀr�ۥ[
	}
	for(i=0;i<count;i++)//��X���G 
	{
		if(carry[i]==0)
			printf("%s\n",c);
		else if(carry[i]==1)
			printf("%s\n",c2);
		else
			printf("%d%s\n",carry[i],c3);
	}
	return 0;
}
