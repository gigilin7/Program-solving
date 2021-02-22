//找出2字串的共同字母 
//使用2個陣列，存放2個字串所出現的字母頻率。
#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[1000]={0},b[1000]={0};
	char abc[27]={"abcdefghijklmnopqrstuvwxyz"};
	int i,j,sum1[27]={0},sum2[27]={0},len1,len2;
	while(gets(a)!=NULL)
	{
		int sum1[27]={0};
		int sum2[27]={0};
		gets(b);
		for(i=0;i<strlen(a);i++)//存放a字串所出現的字母頻率 
		{
			char k='a';
			for(j=0;j<26;j++)
			{
				if(a[i]==k)
				{
					sum1[j]++;
					break;
				}
				k++;
			}
		}
		for(i=0;i<strlen(b);i++)//存放b字串所出現的字母頻率
		{
			char k='a';
			for(j=0;j<26;j++)
			{
				if(b[i]==k)
				{
					sum2[j]++;
					break;
				}
				k++;
			}
		}
		for(i=0;i<26;i++)//找出2陣列頻率最小值，並印出字母。
		{                //如a字串:baa, b字串:caaab, 答案:aab
			if(sum1[i]>0&&sum2[i]>0)
			{
				if(sum1[i]>=sum2[i])
				{
					for(j=0;j<sum2[i];j++)
					{
						printf("%c",abc[i]);
					}
				}
				else
				{
					for(j=0;j<sum1[i];j++)
					{
						printf("%c",abc[i]);
					}
				}
			}
				
		}
		printf("\n");
	}
	
	return 0;
} 
