//�D��:http://javauva.blogspot.com/2016/01/c094-00661-blowing-fuses.html 
#include <iostream>
using namespace std;
int main()
{
	int n,m,c,count=1;//�q���Ϋ~�ơA�}�����ơA�W�� 
	while(cin>>n>>m>>c&&n)
	{       //turn=0�O���Aturn=1�O�} 
		int I[20]={0},turn[100]={0},sum=0,max=0;
		for(int i=1;i<=n;i++)
		{
			cin>>I[i];//�C�ӹq�����q�y 
		}
		for(int i=0;i<m;i++)
		{
			int num;
			cin>>num;//���ӹq���n�}�� 
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
