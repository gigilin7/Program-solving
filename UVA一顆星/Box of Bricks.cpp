//��n�h�h�֭ӿn���O��h 
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,h[100],num=1;
	while(cin>>n)//���X��n�� 
	{
		int sum=0,count=0;
		if(n==0)
			break;
		for(int i=0;i<n;i++)
		{
			cin>>h[i];//�C��n�즳�X�� 
			sum+=h[i];
		}
		for(int i=0;i<n;i++)
		{
			if(h[i]>sum/n)
				count+=abs(h[i]-sum/n);
		}
		cout<<"Set #"<<num++<<'\n';
		cout<<"The minimum number of moves is "<<count<<".\n\n";//�O�o�n��Ӵ��� 
	}
}
