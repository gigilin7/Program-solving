//字元轉換成ASCII碼，並計算有幾個 
#include <stdio.h>
#include <string.h>
int main(void)
{
	int output[130]={0},max=0,n=0,i=0,j=0;
	char input[1000]={0};
	while(gets(input))
	{
		int output[130]={0};//初始化 
		int max=0;
		
		if(n==1)//有要在輸入下個值才要印換行 
			printf("\n");
		
		for(i=0;i<strlen(input);i++)//計算字元轉換成ASCII碼後，出現幾次 
		{
			output[input[i]]++;
		}
		
		for(i=0;i<130;i++)//找出最高次數的是幾次(max) 
		{
			if(output[i]>max)
				max=output[i];
		}
		
		for(i=1;i<=max;i++)//印出順序:由次數少到多，如果次數一樣，ASCII碼大的排前面 
		{
			for(j=123;j>=0;j--)//所以要從大的ASCII碼開始測(ASCII碼123是z) 
			{
				if(output[j]==i)
					printf("%d %d\n",j,output[j]);
			}
		}
		
		n=1;//做個標記，才可判斷輸出結果後要不要換行 
	}
	
	return 0;
}
 
