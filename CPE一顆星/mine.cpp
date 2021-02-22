//minesweeperªºc++ª© 
#include <iostream>
using namespace std;
int main()
{
	int i,j,h,w,count=1;
	while(cin>>h>>w)
	{
		if(h==0&&w==0)
			break;
		if(count!=1)
			cout<<endl;
		cout<<"Field #"<<count++<<":"<<endl;
		char mine[100][100]={0};
		for(i=0;i<h;i++)
		{
			cin>>mine[i];
		}
		for(i=0;i<h;i++)
		{
			for(j=0;j<w;j++)
			{
				int sum=0;
				if((i-1>=0&&j-1>=0)&&mine[i-1][j-1]=='*')
					sum++;
				if((i-1>=0)&&mine[i-1][j]=='*')
					sum++;
				if((i-1>=0&&j+1<w)&&mine[i-1][j+1]=='*')
					sum++;
				if((j-1>=0)&&mine[i][j-1]=='*')
					sum++;
				if((j+1<w)&&mine[i][j+1]=='*')
					sum++;
				if((i+1<h&&j-1>=0)&&mine[i+1][j-1]=='*')
					sum++;
				if((i+1<h)&&mine[i+1][j]=='*')
					sum++;
				if((i+1<h&&j+1<w)&&mine[i+1][j+1]=='*')
					sum++;
					
				if(mine[i][j]=='*')
					cout<<"*";
				else
					cout<<sum;
			}
			cout<<endl;
		}
	}
}
