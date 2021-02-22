//給你每個學生旅遊時出的錢
//請你算出最少有多少錢要交換（就是出的少的人拿錢給出的多的人）
//使得每個人所出的錢都盡可能接近 (只能誤差0.01) 
//注意:用floor(?+0.5)四捨五入，因版本關係不能用round(?) 
//因有小數點問題，所以先將錢*100計算，最後再/100 
//例外:6 0.00 0.00 0.00 0.00 0.00 0.02 答:$0.01 
#include <iostream>
#include <cmath> 
using namespace std;
int main()
{
	int n;
	while(cin>>n&&n)
	{
		float money[1000],sum=0,avg;
		float min1=0,min2=0;
		for(int i=0;i<n;i++)
		{
			cin>>money[i];
			money[i]=money[i]*100;
			sum=sum+money[i];	
		}
		avg=sum/n;
		if(avg>0&&avg<1)//例外 !!! 
			avg=1;
		else
			avg=floor(avg+0.5);//等於round(avg)
		for(int i=0;i<n;i++)
		{
			if(money[i]>avg)
			{
				min1=min1+(money[i]-avg);
			}
			else
				min2=min2+(avg-money[i]);
		}
		if(min1>min2)
			printf("$%.2f\n",min2/100);
		else
			printf("$%.2f\n",min1/100);
	}
} 
