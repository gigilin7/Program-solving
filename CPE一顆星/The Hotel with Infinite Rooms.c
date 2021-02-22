//一次只能有一團旅行團住在裡面
//除了第一團，其餘的旅行團人數都會比前面一團的人數多1人
//旅行團人數等於待在飯店的天數
//每行輸入的第一個數字為旅行團人數(S)、第二個數字為指定日期(D)。S+(S+1)+(S+2)+......+(S+N)<D
//求在指定日期(D)那天的旅行團人數是幾人(S+N) 
#include <stdio.h>
int main(void)
{
	long long S,D;
	while(scanf("%lld%lld",&S,&D)!=EOF)
	{
		long long sum=0;//sum是住在飯店的總天數 
		for(;sum<D;S++)
		{
			sum=sum+S;
		}
		printf("%lld\n",S-1);//因上面的迴圈會多加一次，所以最後要減1 
	}
	return 0;
}
