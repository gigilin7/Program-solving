//耞块计琌ぃ琌11计 
//计计计-案计计㎝狦琌0┪11计玥计琌11计 
#include <stdio.h>
#include <string.h>
int main(void)
{
	char num[1000];
	while(strcmp(num,"0")!=0)
	{
		int i,sum=0;
		char num[1000]={0};
		scanf("%s",num);
		if(strcmp(num,"0")==0)
			break;
		for(i=0;i<strlen(num);i=i+2)
		{
			sum=sum+(num[i]-'0');
			if(i+1>=strlen(num)) 
				break;
			sum=sum-(num[i+1]-'0');
		}
		if(sum==0||sum%11==0)
			printf("%s is a multiple of 11.\n",num);
		else 
			printf("%s is not a multiple of 11.\n",num);
	}
} 
