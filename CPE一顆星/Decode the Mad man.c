//�N�@���J����L�W���r�����ǸѽX(�pk[r dyt I[o�ܦ�how are you) 
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
				if(code[i]==32)//32�O�ť��䪺ASCII�X 
				{
					printf(" ");
					break;
				}
				//�o�̬O��������S�L�X���r���A�]���A�g�ӧP�_�L�X 
				else if(code[i]==100)//100�Od��ASCII�X 
				{
					printf("a");
					break;
				}
				else if(code[i]==73)//73�OI��ASCII�X 
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
