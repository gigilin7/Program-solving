//�p��å[�`�C���J����a�ƶq(�L�X����a�W�٭n�ӲĤ@�Ӧr�����j�p�Ƨ�) 
#include <stdio.h>
#include <string.h>
int main(void)
{
	int n,i,j;
	char input[75];
	int sum[7]={0};
	//England France Germany Italy Spain Turkey(����) 
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<3;j++)//�n�]�T������]:�|��England Harry Poter�@���T�Ӧr�� 
		{
			scanf("%s",input);
			//���ۤv���n�ƧǦA�h�P�_ 
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
	for(i=0;i<7;i++)//�L�X���G 
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
