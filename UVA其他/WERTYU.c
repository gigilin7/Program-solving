//keyboard�N����L����A�L�X���G����L����@�檺����(�j�g) 
//��J:O S, GOMR YPFSU/
//��X:I AM FINE TODAY. 
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
			if(in[i]==32)//32�O�ť��䪺ASCII CODE 
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
