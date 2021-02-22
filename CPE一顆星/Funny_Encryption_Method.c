//照著題目的步驟算出答案 
#include <stdio.h>
int main(void)
{
	int n,D,H,temp;
	scanf("%d",&n);//有幾組 
	while(n--)
	{
		int b1=0,b2=0;
		scanf("%d",&D);//輸入要運算的數字 
		H=D;
		while(D!=0)//十進位轉二進位 
		{
			if(D%2==1)
				b1++;//b1=二進位中數字1的數量
			D=D/2;
		}
		while(H!=0)//十六進位轉二進位(要先轉成十進位，再轉成二進位) 
		{
			temp=H%10;
			while(temp!=0) 
			{
				if(temp%2==1)
					b2++;//b2=二進位中數字1的數量
				temp=temp/2;
			}
			H=H/10;
		}
		printf("%d %d\n",b1,b2);
	}
} 
