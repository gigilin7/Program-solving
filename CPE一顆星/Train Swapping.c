//�p��@��Ʀr�n���ʴX���~��Ѥp��j�Ʀn
//�|��:4 3 2 1 �n6�����ʤ~���ܦ�1 2 3 4 
#include <stdio.h>
int main(void)
{
	int N,n,num[50]={0},temp,count,i,j;
	scanf("%d",&N);//���X�� 
	while(N--)
	{
		count=0;
		scanf("%d",&n);//�@�զ��X�ӼƦr 
		for(i=0;i<n;i++)
		{
			scanf("%d",&num[i]);//�@��Ʀr 
		}
		for(i=0;i<n-1;i++)//bubble sort�Ƥj�p 
		{
			for(j=0;j<n-1-i;j++)
			{
				if(num[j]>num[j+1])
				{
					temp=num[j];
					num[j]=num[j+1];
					num[j+1]=temp;
					count++;
				} 
			}
		}
		printf("Optimal train swapping takes %d swaps.\n",count);
	}
	return 0;
}
