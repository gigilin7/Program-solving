//�ӵ��D�ت��B�J��X���� 
#include <stdio.h>
int main(void)
{
	int n,D,H,temp;
	scanf("%d",&n);//���X�� 
	while(n--)
	{
		int b1=0,b2=0;
		scanf("%d",&D);//��J�n�B�⪺�Ʀr 
		H=D;
		while(D!=0)//�Q�i����G�i�� 
		{
			if(D%2==1)
				b1++;//b1=�G�i�줤�Ʀr1���ƶq
			D=D/2;
		}
		while(H!=0)//�Q���i����G�i��(�n���ন�Q�i��A�A�ন�G�i��) 
		{
			temp=H%10;
			while(temp!=0) 
			{
				if(temp%2==1)
					b2++;//b2=�G�i�줤�Ʀr1���ƶq
				temp=temp/2;
			}
			H=H/10;
		}
		printf("%d %d\n",b1,b2);
	}
} 
