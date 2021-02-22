//計算並加總每行輸入的國家數量(印出的國家名稱要照第一個字母的大小排序) 
#include <stdio.h>
#include <string.h>
int main(void)
{
	int n,i,j;
	char input[75];
	int sum[7]={0};
	//England France Germany Italy Spain Turkey(順序) 
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<3;j++)//要跑三次的原因:舉例England Harry Poter共有三個字串 
		{
			scanf("%s",input);
			//先自己做好排序再去判斷 
			if(strcmp(input,"England")==0) 
				sum[0]++;
			else if(strcmp(input,"France")==0)
				sum[1]++;
			else if(strcmp(input,"Germany")==0)
				sum[2]++;
			else if(strcmp(input,"Italy")==0)
				sum[3]++;
			else if(strcmp(input,"Spain")==0)
				sum[4]++;
			else if(strcmp(input,"Turkey")==0)
				sum[5]++;
		}
	}
	for(i=0;i<7;i++)//印出結果 
	{
		if(sum[i]>0)
		{
			if(i==0)
				printf("England");
			else if(i==1)
				printf("France");
			else if(i==2)
				printf("Germany");
			else if(i==3)
				printf("Italy");
			else if(i==4)
				printf("Spain");
			else if(i==5)
				printf("Turkey");
			printf(" %d\n",sum[i]);
		}
	}
	return 0;
}
