//讀取一數字，計算該數字是否為九的倍數？如是，再計算其階層數
//計算階層數：所有位數相加後得出的第一個總和為一階，依此類推直到該數字無法再計算總和。
//例子:999 => 27(9+9+9, 1階) => 9(2+7, 2階) 
#include <stdio.h>
#include <string.h>
int main(void)
{
	int i,deg;
	char num[1000];
	while(strcmp(num,"0")!=0)
	{
		char num[1000]={0};
		int sum=0,temp=0;
		scanf("%s",num);
		if(strcmp(num,"0")==0)//輸入0結束 
			break;
		for(i=0;i<strlen(num);i++)
		{
			sum=sum+(num[i]-'0');//字元轉換成數字並加總 
		}
		if(sum%9!=0)
		{
			printf("%s is not a multiple of 9.\n",num);
		}	
		else
		{
			deg=1;//階層數 
			while(sum>9)
			{
				while(sum>0)
				{
					temp=temp+(sum%10);
					sum=sum/10;
				}
				if(temp%9==0)
					deg++;
				sum=temp;
				temp=0; 
			}
			printf("%s is a multiple of 9 and has 9-degree %d.\n",num,deg);
		}	
	}
	return 0;
}
