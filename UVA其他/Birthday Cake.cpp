//�J�|��2n�����n�����A���y��x,y 
//��XA,B��Ax+By=0,��(>0������)=(<0������)=n�ɦ�����(��X�@���״N�n) 
#include <iostream>
using namespace std;
int main()
{
	int n,x[101]={0},y[101]={0};
	while(cin>>n&&n!=0)
	{
		for(int i=0;i<2*n;i++)
		{
			cin>>x[i]>>y[i];
		}
		int flag=1;
		for(int A=-500;A<=500&&flag;A++)
		{
			for(int B=-500;B<=500&&flag;B++)
			{
				int l=0,r=0;
				for(int i=0;i<2*n;i++)
				{
					if(A*x[i]+B*y[i]>0)
						l++;
					if(A*x[i]+B*y[i]<0)
						r++;
				}
				if(l==n&&r==n)
				{
					cout<<A<<" "<<B<<'\n';
					flag=0;
				}	
			}
		}
	}
	
} 
