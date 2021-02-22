//3聋琍 
//璽计︹加糷タ计玥屡︹加糷荡癸玥琌縩т程加糷计 
//ゲ斗ㄢ兵ン: 
//1.–加糷縩ゲ斗ウ糷縩
//2.綟ㄢ加糷肅︹ゲ斗ぃ(タ璽)
//ㄒ:7 -2 6 9 -3 sort-> 9 7 6 -3 -2 块:2  
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int compare(int a,int b)
{
	return abs(a)>abs(b);// 
}
int main()
{
	int p,n,flag;
	cin>>p;//碭掸戈 
	for(int i=0;i<p;i++)
	{
		cin>>n;//ノ加糷计 
		int floor[n]={0};
		int sum=1;//礚阶常Τ糷加 
		for(int j=0;j<n;j++)
		{
			cin>>floor[j];
		}
		sort(floor,floor+n,compare);//盢计逼
									//(ぃ恨タ璽腹) 
		if(floor[0]>0)
			flag=1;
		else
			flag=0;
			
		for(int j=1;j<n;j++)
		{
			if(flag)
			{
				if(floor[j]<0)
				{
					flag=0;
					sum++;
				}
			}
			else
			{
				if(floor[j]>0)
				{
					flag=1;
					sum++;
				}
			}
		}
		cout<<sum<<endl;
	}
} 
