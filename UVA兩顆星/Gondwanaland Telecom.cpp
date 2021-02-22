//算各時段分鐘數與電話費
//計算時全部換成分鐘比較好算 
#include <iostream>
using namespace std;
int main()
{
	char cs;
	char phone[8];
	double cost[5][3]={{0.1,0.06,0.02},{0.25,0.15,0.05},
	{0.53,0.33,0.13},{0.87,0.47,0.17},{1.44,0.8,0.3}};
	int h1,m1,h2,m2;
	while(cin>>cs)//charging step 
	{	//哪些時段有通話 	 各時段分鐘數 
		int minute[1440]={0},time[3]={0};
		if(cs=='#')
			break;
		cin>>phone>>h1>>m1>>h2>>m2;
		int sum1=h1*60+m1;
		int sum2=h2*60+m2;
		if(sum1<sum2)
		{
			for(int i=sum1;i<sum2;i++)
			{
				minute[i]=1;
			}
		}
		else//過凌晨到隔天 
		{
			for(int i=sum1;i<1440;i++)
			{
				minute[i]=1;
			}
			for(int i=0;i<sum2;i++)
			{
				minute[i]=1;
			}
		}
		for(int i=480;i<1080;i++)
		{
			if(minute[i]==1)
				time[0]++;
		}
		for(int i=1080;i<1320;i++)
		{
			if(minute[i]==1)
				time[1]++;
		}
		for(int i=1320;i<1440;i++)
		{
			if(minute[i]==1)
				time[2]++;
		}
		for(int i=0;i<480;i++)
		{
			if(minute[i]==1)
				time[2]++;
		}
		double price=time[0]*cost[cs-'A'][0]+time[1]*cost[cs-'A'][1]+time[2]*cost[cs-'A'][2];
		printf("%10s%6d%6d%6d%3c%8.2lf\n",phone,time[0],time[1],time[2],cs,price);
		
	}
}
