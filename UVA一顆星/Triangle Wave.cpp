//�ھکҵ������T(Amplitude)���W�v(Frequency)�A���ͪi
#include <iostream>
using namespace std;
int main()
{
	int n,A,F;//A:���T F:�W�v 
	cin>>n;//�X����� 
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
