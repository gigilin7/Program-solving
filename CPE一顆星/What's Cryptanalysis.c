//在所有的輸入中，找出每個有出現的字母有幾個印出
//(數量由大到小列出，若數量一樣，則字母由小到大列出) 
#include <stdio.h>
#include <string.h>
int main(void)
{
	char input[1000]={0},in[1000]={0},upper='A',lower='a',atoz[27],temp2;
	int i=0,j=0,k=0,l=0,output[27]={0},temp=0,lines;
	
	scanf("%d",&lines);//決定有幾行輸入 
	for(i=0;i<=lines;i++)//為啥是i<=lines而不是i<lines? 
	{
		gets(in);//每串輸入 
		strcat(input,in);//把每串輸入放進input裡 
	}
	for(k=0;k<strlen(input);k++)//判斷A到Z每個字母有幾個，並存到output裡 
	{
		for(l=0,upper='A',lower='a';l<=26;l++)
		{
			if(input[k]==upper||input[k]==lower)//大小寫都算，如Aa算2個 
			{
				output[l]++;
				break;
			}
			else
			{
				upper++;
				lower++;
			}
		}
	}
	for(i=0,upper='A';i<26;i++)//讓atoz裡放A到Z
	{
		atoz[i]=upper;
		upper++;
	}
	for(i=0;i<26;i++)//排序 
	{
		for(k=0;k<26;k++)
		{
			if(output[i]==0)
			{
				break;
			}
			
			if(output[i]>output[k])//如果前>後，就交換順序(包括字母的次數&字母本身) 
			{
				temp=output[i];
				output[i]=output[k];
				output[k]=temp;
					
				temp2=atoz[i];
				atoz[i]=atoz[k];
				atoz[k]=temp2;
				
			}
			else if(output[i]==output[k] && atoz[i]<atoz[k])
			//如果前後相同，且前面的字母比後面小(如A<B)，就交換字母順序 
			{
				temp2=atoz[i];
				atoz[i]=atoz[k];
				atoz[k]=temp2;
			}
			
			
		}	
	}
	for(i=0;i<26;i++)
	{
		if(output[i]>0)//字母次數為0就不印出 
		{
			printf("%c ",atoz[i]);
			printf("%d\n",output[i]);
		}
			
	}
	return 0;
}
