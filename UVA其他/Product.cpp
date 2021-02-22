//大數字相乘
//記得考慮: 0*0=0 , 0*某數=0 
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	while(cin>>s)
	{
		int x[500]={0},y[500]={0},ans[500]={0},xlen,ylen;
		xlen=s.length();
		for(int i=xlen-1,j=0;i>=0;i--,j++)
		{
			x[j]=s[i]-'0';
		}
		cin>>s;
		ylen=s.length();
		for(int i=ylen-1,j=0;i>=0;i--,j++)
		{
			y[j]=s[i]-'0';
		}
		for(int i=0;i<ylen;i++)
		{
			for(int j=0;j<xlen;j++)
			{
				ans[i+j]+=x[j]*y[i];
			}
			for(int j=0;j<500;j++)
			{
				if(ans[j]>9)
				{
					ans[j+1]+=ans[j]/10;
					ans[j]=ans[j]%10;
				}
			}
		}
		int pos=0;//紀錄哪個位置開始不是0 
		for(int i=500-1;i>=0;i--)
		{
			if(ans[i]>0)
			{
				pos=i;
				break;
			}
		} 
		for(int i=pos;i>=0;i--)
		{
			cout<<ans[i];
		} 
		cout<<'\n';
	}
}
//想法參考:
//http://kos74185foracm.blogspot.com/2011/06/10106-product.html 
