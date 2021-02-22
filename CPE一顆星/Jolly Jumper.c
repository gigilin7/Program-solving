//題目:相鄰的2個數其差的絕對值恰好為1到n-1 --> Jolly 
#include <stdio.h>
#include <stdlib.h>//abs(讓裡面的值是絕對值) 
int main(void)
{
	int number[3000]={0},jolly[3000]={0},i=0,j=0,n=0,temp=1,total[100]={0},count=0;
	for(j=0;scanf("%d",&n)!=EOF;j++)//第一個輸入的數字n是說明後面會有幾個數字 
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",&number[i]);
		}
		for(i=0;i<n;i++)
		{
			jolly[abs(number[i+1]-number[i])-1]=1;
			//讓後一個數字跟前一個數字的差做一個標記 
		}
		for(i=0,temp=1;i<n-1;i++)//i<n-1是因為題目說1到n-1 
		{
			if(jolly[i]==0)//如果有其中一個差沒被標記到，就讓temp等於0 
			{
				temp=0;
			}
		}
		if(temp==1) 
			total[j]++;//讓裡面存哪一組數字是jolly的就放1，不是就維持0 
		temp=1;//初始要設為1 
		for(i=0;i<10;i++)//初始化(歸0) 
		{
			number[i]=0;
			jolly[i]=0;
		}
		count++;//數總共有幾組 
	}
	
	for(i=0;i<count;i++)//印結果出來 
	{
		if(total[i]==1)
			printf("Jolly\n");
		else
			printf("Not jolly\n");
	}
	
	
	return 0;
}
