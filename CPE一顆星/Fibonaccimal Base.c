//若轉換後的數字大的時候用 
//將數字轉換成費氏數列進位表示
//舉例:17= 1 0 0 1 0 1 
//13+3+1= 13 8 5 3 2 1
#include <stdio.h>
#include <string.h>
int main(void)
{
	int n,num,number,i,j,temp;
	scanf("%d",&n);//有幾組 
	while(n--)
	{
		scanf("%d",&num);//輸入數字 
		number=num;//先把num的值存起來，因下面num的值會改變 
		int f[100]={0},count=2,a=1,b=2;
		//1跟2的費氏數列先裝好  
		f[0]=1;
		f[1]=2;
		for(i=2;num>=3;i++)//裝一個費氏數列的陣列(但最大值不超過num) 
		{
			if(num==1||num==2)//num等於1或2時，不需要算，下面會直接印答案 
				break;
			f[i]=a+b;
			a=b;
			b=f[i];
			if(num<f[i])
				break;
			count++;//計算費氏陣列裝了幾個值 
			
		}
		char ans[1000]={0}; 
		for(i=0,j=count-1;j>=0;i++,j--)//轉換成費氏數列進位 
		{
			temp=num/f[j];
			if(temp==1)
				ans[i]='1';
			else
				ans[i]='0';
			if(num>=f[j])
				num=num-f[j];
		}
		if(number==1)
			printf("%d = 1 (fib)\n",number);
		else if(number==2)
			printf("%d = 10 (fib)\n",number);
		else
			printf("%d = %s (fib)\n",number,ans);
	}
	return 0;
}
