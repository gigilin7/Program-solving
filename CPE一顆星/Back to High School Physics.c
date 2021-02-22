//這是一等加速度，所以位移的公式就是:平均速度 * 經過的時間
//因題目說要兩倍(double)時間後的位移，所以要再乘2                
#include <stdio.h>
int main(void)
{
	int v,t;
	while(scanf("%d",&v)!=EOF)
	{
		scanf("%d",&t);
		printf("%d\n",2*v*t);
	}
	return 0;
} 
