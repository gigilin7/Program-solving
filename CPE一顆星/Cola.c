//3�~�ťi�����i��1�~�i��(�p��@�ܤF�X�~�i��)
//�p�G�u�t1�~�Ų~�A�i�V�B�ͭ�1�~���h��(�ɪ����⦳��) 
#include <stdio.h>
int main(void)
{
	int n,a;
	while(scanf("%d",&n)!=EOF)//�쥻���X�~�i�� 
	{
		int sum=n;
		while(n!=1)
		{
			a=n/3;//a�O���F�X�~ 
			n=n-(3*a)+a;//�ѤU�X�~ 
			if(n==2)//�Y��n�u��2�~�N�h��1�~ 
				n++;
			sum=sum+a;
		}
		printf("%d\n",sum);
	}
	return 0;
}
