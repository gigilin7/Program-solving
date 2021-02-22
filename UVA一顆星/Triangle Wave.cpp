//根據所給的振幅(Amplitude)及頻率(Frequency)，產生波
#include <iostream>
using namespace std;
int main()
{
	int n,A,F;//A:振幅 F:頻率 
	cin>>n;//幾筆資料 
	while(n--)
	{
		cin>>A>>F;
		while(F--)
		{
			for(int i=1;i<=A;i++)
			{
				for(int j=1;j<=i;j++)
				{
					cout<<i;
				}
				cout<<endl;
			}
			for(int i=A-1;i>=1;i--)
			{
				for(int j=1;j<=i;j++)
				{
					cout<<i;
				}
				cout<<endl;
			}
			if(F)
				cout<<endl;
		}
		if(n)
		 cout<<endl;
	}
}
