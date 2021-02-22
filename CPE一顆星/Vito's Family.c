//原本沒問題，現在似乎會出錯(所以先參考C++的版本) 
//找一間離所有親戚家最近的房子(找中位數)
//使得他拜訪所有親戚時，距離的總和是最小值 (親戚最多500個) 
#include <stdio.h>
#include <stdlib.h>//abs(裡面的值變絕對值) 
int main(void)
{
	int n=0,number[10]={0},i=0,j=0,k=0,total[500]={0},n2=0,best=0,temp=0;
	scanf("%d",&n);//決定有幾組資料 
	for(k=0;k<n;k++)
	{
		scanf("%d",&n2);//決定有幾間房子(包刮自己跟親戚) 
		for(i=0;i<n2;i++)
		{
			scanf("%d",&number[i]);//房子的編號 
		}
		for(i=0;i<n2-1;i++)//bubble sort(讓每間房子由編號小到大排序) 
		{
			for(j=0;j<n2-1-i;j++)
			{
				if(number[j]>number[j+1])
				{
					temp=number[j];
					number[j]=number[j+1];
					number[j+1]=temp;
				}
			}
		}
		
		if(n2%2==0)//偶數 
			best=n2/2-1;//best是中位數，要減1是因為第一個輸入的值是放在0的位置 
		else
			best=n2/2;
			
		for(i=0;i<n2;i++)//算最小距離總和(中位數減掉每一位數的值相加) 
		{
			total[k]=total[k]+abs(number[best]-number[i]);
		}
		int number[500]={0};//初始化(歸0) 
		temp=0;//初始化 
	}
	for(i=0;i<n;i++)//印結果 
	{
		printf("%d\n",total[i]);
	}
	
	return 0;
}
