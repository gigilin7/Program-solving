//�N������J���r����90�צL�X 
//�|��:Hi~
//     Ya !
//�L�X:YH\n
//     ai\n
//      ~\n
//     !\n 
#include <stdio.h>
#include <string.h>
int main(void)
{
	int i,j,max=0,count=0;
	char c[100][100]={0};
	while(gets(c[count])!=NULL)
	{
		if(strlen(c[count])>max)//max�O�̪��r�ꪺ���� 
			max=strlen(c[count]);
		count++;//count�O���X��r�� 
	}
	
	for(i=0;i<max;i++)
	{
		for(j=count-1;j>=0;j--)
		{
			if(c[j][i])//�Yc[j][i]����J�� 
				printf("%c",c[j][i]);
			else//c[j][i]�S����J�� 
			{
				if(j!=0)//j=0�O�̥~�h�A�p�G�S��J�ȡA���ݭn�L�ť� 
					printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
