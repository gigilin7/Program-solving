//�N�Ĥ@�� "�ܦ� ``�L�X�A�ĤG�� "�ܦ�''�L�X�A��l�r���Χ��ܪ����L�X 
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
