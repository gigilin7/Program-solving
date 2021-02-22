//將輸入數字轉換成二進位，並計算此二進位數字中有幾個1 
#include <stdio.h>
#include <string.h>
int main(void)
{
	int num,temp=0,i;
	while(scanf("%d",&num)!=0)
	{
		if(num==0)
			break;
		char binary[1000]={0};
		int sum=0;
		for(i=0;num!=0;i++)
		{
			temp=num%2;
			if(temp==1)
			{
				sum++;
				binary[i]='1';
			}
			else	
				binary[i]='0';
			num=num/2;
		}
		printf("The parity of %s is %d (mod 2).\n",strrev(binary),sum);
	}
	return 0;
}
