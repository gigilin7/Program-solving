//這個是每筆資料都是用空白鍵隔開，兩兩配對運算 (與題目輸入格式符合) 
//找出兩數字相加有幾次進位，當輸入0 0就結束  
#include <stdio.h>
#include <string.h>
int main(void)
{
	int i=0,j=0,a=0,b=0,temp=0,carry[15]={0},count=0,a1=0,b1=0;
	char c[100]="No carry operation.",c2[100]="1 carry operation.",c3[100]=" carry operations.";
	for(j=0;;j++)
	{
		scanf("%d",&a);
		scanf("%d",&b);
		if(a==0)//輸入0結束程式 
			break;
		a1=a%10;
		b1=b%10;
		for(i=0;;i++)
		{
			if((a1+b1)>=10)
			{
				temp++;//算有幾次進位
				a=a/10;
				b=b/10;
				a1=a%10;
				b1=b%10;
				a1++;//因為有進位，所以下一位數+1 
			}
			else 
			{
				a=a/10;
				b=b/10;
				a1=a%10;
				b1=b%10;
			}
			if(a<=1&&b<=1)
				break;
			
		}
		carry[j]=temp;//carry存每組相加完有進位幾次的值 
		temp=0;
		a=0;
		b=0;
		count++;//數有幾次數字相加
	}
	for(i=0;i<count;i++)//輸出結果 
	{
		if(carry[i]==0)
			printf("%s\n",c);
		else if(carry[i]==1)
			printf("%s\n",c2);
		else
			printf("%d%s\n",carry[i],c3);
	}
	return 0;
}
