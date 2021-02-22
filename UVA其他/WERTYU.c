//keyboard代表鍵盤按鍵，印出結果為鍵盤左邊一格的按鍵(大寫) 
//輸入:O S, GOMR YPFSU/
//輸出:I AM FINE TODAY. 
#include <stdio.h>
#include <string.h>
int main()
{
	char in[100];
	int i,j;
	char keyboard[48]="`1234567890-=QWERTYUIOP[]\ASDFGHJKL;'ZXCVBNM,./";
	while(gets(in))
	{
		for(i=0;i<strlen(in);i++)
		{
			if(in[i]==32)//32是空白鍵的ASCII CODE 
				printf(" ");
			else	
			{
				for(j=0;j<strlen(keyboard);j++)
				{
					if(in[i]==keyboard[j])
					{
						printf("%c",keyboard[j-1]);
						break;
					}	
				}
			}		
		}
		printf("\n");
	}
	
} 
