//��X����ơA�p�⦳�X�өM����Ƥ@�˪��Ʀr�A��X�i�঳�X�س̤p��(�]�t���b�ҿ�J����Ƹ̭�)
#include <stdio.h>
#include <stdlib.h>//abs()
int main(void)
{
	int i=0,j=0,k=0,n,num[100]={0},mid,mid2,count=0,subtract,a,b,temp;
	for(i=0;scanf("%d",&n)!=EOF;i++)//�M�w�n��J�X�ӼƦr�h�B�� 
	{
		int num[100]={0};//�C���⧹���n�k0 
		for(j=0;j<n;j++)
		{
			scanf("%d",&num[j]);//��J�C���Ʀr 
		}
		for(a=0;a<n-2;a++)//bubble sort(�ƶ��ǡA�Ѥp��j) 
		{
			for(b=0;b<n-2-a;b++)
			{
				if(num[b]>num[b+1])
				{
					temp=num[b];
					num[b]=num[b+1];
					num[b+1]=temp;
				}
			}
		}
		//���� (mid �� mid2���O����ơA�B�C�ӳ��n��1�O�]���Ĥ@�ӿ�J���ȬO��b0����m)
		if(n%2==0) 
		{
			mid=num[n/2-1];//�쥻�O n/2
			mid2=num[n/2];//�쥻�O n/2+1 
		}
		else 
		{
			mid=num[n/2];//�쥻�O n/2+1 
			mid2=num[n/2];//�쥻�O n/2+1 
		}
		for(k=0;k<n;k++)//�p�⦳�X�өM����Ƥ@�˪��Ʀr
		{
			if(num[k]==mid||num[k]==mid2)
				count++;
		}
		subtract=abs(mid2-mid)+1;//�p3��8��subtract=|8-3|+1 
		//subtract������Ƥ������Ʀr���X��(�]�A�����) 
		printf("%d %d %d\n",mid,count,subtract);//�L�X���G 
		count=0;
	}
	
	return 0;
}
 
