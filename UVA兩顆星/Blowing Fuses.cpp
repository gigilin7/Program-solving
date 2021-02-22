//題目:http://javauva.blogspot.com/2016/01/c094-00661-blowing-fuses.html 
#include <iostream>
using namespace std;
int main()
{
	int n,m,c,count=1;//電器用品數，開關次數，上限 
	while(cin>>n>>m>>c&&n)
	{       //turn=0是關，turn=1是開 
		int I[20]={0},turn[100]={0},sum=0,max=0;
		for(int i=1;i<=n;i++)
		{
			cin>>I[i];//每個電器的電流 
		}
		for(int i=0;i<m;i++)
		{
			int num;
			cin>>num;//哪個電器要開關 
			if(turn[num]==0)
			{
				turn[num]=1;
				sum=sum+I[num];
				if(sum>max)
					max=sum;
			}
			else
			{
				turn[num]=0;
				sum=sum-I[num];
			}
		}
		cout<<"Sequence "<<count++<<'\n';
		if(sum>c)
			cout<<"Fuse was blown.\n";
		else
		{
			cout<<"Fuse was not blown.\n";
			cout<<"Maximal power consumption was "<<max<<" amperes.\n";
		}
		cout<<'\n';
	}
} 
