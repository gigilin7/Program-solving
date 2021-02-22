//每行輸入兩筆資料(數字最大到2^32)，算敵我雙方人數差距，並用End of File結束輸入 
#include <stdio.h>
int main(void)
{
	int i=0,count=0;
	unsigned int n,n2,difference[100]={0};//因數字太大，所以要用unsigned int(u)
	for(i=0;scanf("%u",&n)!=EOF;i++)     //用unsigned long(lu)也可以 
	{
		scanf("%u",&n2);
		if(n==0)//若n的輸入為4294967296(2^32)，n會等於0 
			difference[i]=n-n2;
		else if(n2==0)//若n2的輸入為4294967296(2^32)，n2會等於0
			difference[i]=n2-n;
		else if(n>n2)//除了4294967296以外的數字都正常運算 
			difference[i]=n-n2;
		else
			difference[i]=n2-n;
		count++;//數有幾組要運算的資料 
		
	}
	for(i=0;i<count;i++)//印出結果 
	{
		printf("%u\n",difference[i]);
	}
	return 0;
} 
