//假設獲勝機率：p、輸機率：q=1-p
//每次遊戲共有R個回合、有N個人參與遊戲、第I個人獲勝，求出獲勝者的機率 
//使用等比級數整理每個回合獲勝的機率就可以獲得此公式：(q^(k-1)*p) * (1-(q^n^R)) / (1-q^n)。
//(首項：(q^(k-1)*p)、公比：q^n)
#include <stdio.h>
#include <math.h>//用pow()計算出某數的某次方值 
#define Round 50 //題目沒說要幾回合，所以就假設有50回合 
int main(void)
{
	int S,N,I,i=0;
	double p,q,a1,r,answer;
	scanf("%d",&S);//有多少組測試資料
	for(i=0;i<S;i++)
	{
		scanf("%d",&N);//參加遊戲人數
		scanf("%lf",&p);//獲勝的機率
		scanf("%d",&I);//第幾個人獲勝
		q=1-p;//輸的機率 
		a1=pow(q,I-1)*p;//首項 
		r=pow(q,N);//公比 
		if(p==0)
		{
			printf("0.0000\n");
		}
		else
		{
			answer=a1*(1-pow(r,Round))/(1-r);//用等比級數公式算出 
			printf("%.4lf\n",answer);
		}
	}
	
	return 0;
} 
