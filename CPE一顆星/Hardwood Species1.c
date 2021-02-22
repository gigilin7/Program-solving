//未完成版
//這題用C寫有些困難，因此後來改用C++的map較容易解決 
#include <stdio.h>
#include <string.h>
int main(void)
{
	int i,j,n,sum[24]={0},total=0;
	char tree[20];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int sum[24]={0},total=0;
				 
		while(gets(tree))
		{
			
			if(strcmp(tree,"Ash")==0)
				sum[0]++;
			if(strcmp(tree,"Aspen")==0)
				sum[1]++;
			if(strcmp(tree,"Basswood")==0)
				sum[2]++;
			if(strcmp(tree,"Beech")==0)
				sum[3]++;
			if(strcmp(tree,"Black Walnut")==0)
				sum[4]++;
			if(strcmp(tree,"Cherry")==0)
				sum[5]++;
			if(strcmp(tree,"Cottonwood")==0)
				sum[6]++;
			if(strcmp(tree,"Cypress")==0)
				sum[7]++;
			if(strcmp(tree,"Gum")==0)
				sum[8]++;
			if(strcmp(tree,"Hackberry")==0)
				sum[9]++;
			if(strcmp(tree,"Hard Maple")==0)
				sum[10]++;
			if(strcmp(tree,"Hickory")==0)
				sum[11]++;
			if(strcmp(tree,"Pecan")==0)
				sum[12]++;
			if(strcmp(tree,"Poplan")==0)
				sum[13]++;
			if(strcmp(tree,"Red Alder")==0)
				sum[14]++;
			if(strcmp(tree,"Red Elm")==0)
				sum[15]++;
			if(strcmp(tree,"Red Oak")==0)
				sum[16]++;
			if(strcmp(tree,"Sassafras")==0)
				sum[17]++;
			if(strcmp(tree,"Soft Maple")==0)
				sum[18]++;
			if(strcmp(tree,"Sycamore")==0)
				sum[19]++;
			if(strcmp(tree,"White Oak")==0)
				sum[20]++;
			if(strcmp(tree,"Willow")==0)
				sum[21]++;
			if(strcmp(tree,"Yellow Birch")==0)
				sum[22]++;
			if(strcmp(tree,"Willow")==0)
				break;
			
		}
		for(j=0;j<23;j++)
		{
			total=total+sum[j];
		}
		for(j=0;j<23;j++)
		{
			if(sum[j]>0)
			{
				float output=(float)100*(float)sum[j]/(float)total;
				switch(j)
				{
					case 0: printf("Ash %.4f\n",output); break;
					case 1: printf("Aspen %.4f\n",output); break;
					case 2: printf("Basswood %.4f\n",output); break;
					case 3: printf("Beech %.4f\n",output); break;
					case 4: printf("Black Walnut %.4f\n",output); break;
					case 5: printf("Cherry %.4f\n",output); break;
					case 6: printf("Cottonwood %.4f\n",output); break;
					case 7: printf("Cypress %.4f\n",output); break;
					case 8: printf("Gum %.4f\n",output); break;
					case 9: printf("Hackberry %.4f\n",output); break;
					case 10: printf("Hard Maple %.4f\n",output); break;
					case 11: printf("Hickory %.4f\n",output); break;
					case 12: printf("Pecan %.4f\n",output); break;
					case 13: printf("Poplan %.4f\n",output); break;
					case 14: printf("Red Alder %.4f\n",output); break;
					case 15: printf("Red Elm %.4f\n",output); break;
					case 16: printf("Red Oak %.4f\n",output); break;
					case 17: printf("Sassafras %.4f\n",output); break;
					case 18: printf("Soft Maple %.4f\n",output); break;
					case 19: printf("Sycamore %.4f\n",output); break;
					case 20: printf("White Oak %.4f\n",output); break;
					case 21: printf("Willow %.4f\n",output); break;
					case 22: printf("Yellow Birch %.4f\n",output); break;
				}
			}
		}
		printf("\n");
	}
	return 0;
}
