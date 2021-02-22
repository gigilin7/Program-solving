//將全部輸入的字串轉90度印出 
//舉例:Hi~
//     Ya !
//印出:YH\n
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
		if(strlen(c[count])>max)//max是最長字串的長度 
			max=strlen(c[count]);
		count++;//count是有幾行字串 
	}
	
	for(i=0;i<max;i++)
	{
		for(j=count-1;j>=0;j--)
		{
			if(c[j][i])//若c[j][i]有輸入值 
				printf("%c",c[j][i]);
			else//c[j][i]沒有輸入值 
			{
				if(j!=0)//j=0是最外層，如果沒輸入值，不需要印空白 
					printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
