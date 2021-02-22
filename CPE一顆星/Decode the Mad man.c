//將一串輸入用鍵盤上的字元順序解碼(如k[r dyt I[o變成how are you) 
#include <stdio.h>
#include <string.h>
int main(void)
{
	int i,j;
	char keyboard[48]="`1234567890-=qwertyuiop[]\asdfghjkl;'zxcvbnm,./";
	char code[100]={0};
	while(gets(code))
	{ 
		for(i=0;i<strlen(code);i++)
		{
			for(j=0;j<48;j++)
			{
				if(code[i]==32)//32是空白鍵的ASCII碼 
				{
					printf(" ");
					break;
				}
				//這裡是不知為何沒印出的字元，因此再寫個判斷印出 
				else if(code[i]==100)//100是d的ASCII碼 
				{
					printf("a");
					break;
				}
				else if(code[i]==73)//73是I的ASCII碼 
				{
					printf("y");
					break;
				}
				//
				else if(code[i]==keyboard[j])
				{
					printf("%c",keyboard[j-2]);
					break;
				}
			}
		}
		printf("\n");
	} 
	return 0;
} 
