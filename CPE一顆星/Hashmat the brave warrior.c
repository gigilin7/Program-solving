//�C���J�ⵧ���(�Ʀr�̤j��2^32)�A��ħ�����H�Ʈt�Z�A�å�End of File������J 
#include <stdio.h>
int main(void)
{
	int i=0,count=0;
	unsigned int n,n2,difference[100]={0};//�]�Ʀr�Ӥj�A�ҥH�n��unsigned int(u)
	for(i=0;scanf("%u",&n)!=EOF;i++)     //��unsigned long(lu)�]�i�H 
	{
		scanf("%u",&n2);
		if(n==0)//�Yn����J��4294967296(2^32)�An�|����0 
			difference[i]=n-n2;
		else if(n2==0)//�Yn2����J��4294967296(2^32)�An2�|����0
			difference[i]=n2-n;
		else if(n>n2)//���F4294967296�H�~���Ʀr�����`�B�� 
			difference[i]=n-n2;
		else
			difference[i]=n2-n;
		count++;//�Ʀ��X�խn�B�⪺��� 
		
	}
	for(i=0;i<count;i++)//�L�X���G 
	{
		printf("%u\n",difference[i]);
	}
	return 0;
} 
