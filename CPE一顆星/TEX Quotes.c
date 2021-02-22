//將第一個 "變成 ``印出，第二個 "變成''印出，其餘字不用改變直接印出 
#include <stdio.h>
#include <string.h>
int main(void) 
{
	char word[10000],w;
	int i,flag=1;
	while(1)
	{
		gets(word);
		for(i=0;i<strlen(word);i++)
		{
			if(word[i]=='"')
			{
				if(flag==1)
				{
					printf("``");
					flag=2;
				}	
				else if(flag==2)
				{
					printf("''");
					flag=1;
				}	
			}
			else 
			{
				printf("%c",word[i]);
			}
		}
		printf("\n");
		if((w=getchar())==EOF)
			break;
		else
			putchar(w);
	}
	return 0;
}
