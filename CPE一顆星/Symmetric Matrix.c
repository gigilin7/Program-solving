//判斷陣列是否對稱且非負
//若陣列為Symmetric，則此陣列形成迴文(如:5 1 3 2 0 2 3 1 5) 
#include <stdio.h>
int main(void)
{
	int n,i,j,k,N;
	long long num[10000]={0},num1[10000]={0};
	char a[2];
	scanf("%d",&n);//有幾組 
	for(i=1;i<=n;i++)
	{
		int flag=1;//判斷的標記 
		scanf("%s%s%d",&a,&a,&N);//因題目要求的輸入是N = ?(所以要有變數a才可輸入) 
		for(j=0;j<N*N;j++)//若N = 3，則陣列為3*3(用一維存) 
		{
			scanf("%lld",&num[j]);
			if(num[j]<0)
				flag=0;
		}
		for(j=0,k=N*N-1;j<N*N,k>=0;j++,k--)
		{
			num1[j]=num[k];//num1存倒過來的num 
			if(num[j]!=num1[j])
			{
				flag=0;
				break;
			}
		}
		printf("Test #%d: ",i);
		if(flag==0)
			printf("Non-symmetric.\n");
		else
			printf("Symmetric.\n");
		
	}
	return 0;
} 
