//�⦳n�ӼƦr�����C�A�˼�3�ӼƦr�ۥ[���M
//2*row-1=n,row=(n+1)/2
//�����row�C��row*row�ө_��
#include <iostream>
using namespace std;
int main()
{  
	long long n,row,sum;
	while(cin>>n)
	{
		row=(n+1)/2;
		sum=(2*row*row-1)+(2*row*row-3)+(2*row*row-5);
		//���C�̫�@�ө_��  �˼ƲĤG��    �˼ƲĤT�� 
		cout<<sum<<'\n';
	}
} 
