//���Z�W�L�������ʤ���
//�n��%%�~��L�X% 
#include <iostream>
using namespace std;
int main()
{
	int C,N;
	cin>>C;
	while(C--)
	{
		int sum=0,count=0,grade[1000]={0};
		double average;
		cin>>N;
		for(int i=0;i<N;i++)
		{
			cin>>grade[i];
			sum=sum+grade[i];
		}
		average=sum/N;
		for(int i=0;i<N;i++)
		{
			if(grade[i]>average)
				count++;
		}
		printf("%.3lf%%\n",100.0*count/N);
	}
	
} 
