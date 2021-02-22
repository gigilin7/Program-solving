//Τフ璶ノgetline
//getline玡璶ノgetcharぃ穦弄传︽才腹
//肈ヘhttps://zerojudge.tw/ShowProblem?problemid=a535 
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n,p,r,count=0;
	double d;
	string item,name,ans;
	while(cin>>n>>p)
	{
		if(n==0&&p==0)
			break;
		if(count)
			cout<<'\n';
		int max=0;
		double cost=100000000000000.0;
		getchar();//弄传︽才腹 
		for(int i=0;i<n;i++)
		{
			getline(cin,item);
		}
		for(int i=0;i<p;i++)
		{
			getline(cin,name);
			scanf("%lf%d",&d,&r);
			getchar();//弄传︽才腹 
			for(int j=0;j<r;j++)
			{
				getline(cin,item);
			}
			if(r>max)
			{
				max=r;
				cost=d;
				ans=name;
			}	
			else if(r==max)
			{
				if(d<cost)
				{
					max=r;
					cost=d;
					ans=name;
				}
			}
		}
		printf("RFP #%d\n",++count);
		cout<<ans<<'\n';
	}
} 
