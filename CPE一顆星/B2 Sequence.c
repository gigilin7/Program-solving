//B2 sequence�O�@����ƼƦC 1<= b1< b2< b3< ...
//�䤤�Ҧ��� bi + bj �]i <= j�^�Ҥ��۵� 
//��J:5  8 11 17 22 27
//��X:It is not a B2-Sequence.
//�]��17+27=22+22 
#include <stdio.h>
int main(void)
{
	int i=1,j,k,n,sum;
	while(scanf("%d",&n)!=EOF)//��J�@�ƦC���X�ӼƦr 
	{
		int temp=0,num[1000]={0},B2[10000]={0};
		for(j=0;j<n;j++)
		{
			scanf("%d",&num[j]);
			B2[num[j]+num[j]]++;//�ۤv+�ۤv�]�n�O�� 
		}
		for(j=0;j<n-1;j++)
		{
			if(num[j]>num[j+1])
			{
				temp++;
				break;
			}
			for(k=j;k<n-1;k++)
			{
				sum=num[j]+num[k+1];
				B2[sum]++;
				if(B2[sum]==2)
				{
					temp++;
					break;
				}
			}
			if(B2[sum]==2)
				break;
		}
		printf("Case #%d: ",i);
		i++;
		if(temp>0)
			printf("It is not a B2-Sequence.\n");
		else
			printf("It is a B2-Sequence.\n");
		printf("\n");
	}
	return 0;
} 
