//3���P���� 
//��J�@�Ӿ��N (�Ʀr�ܤj�n��string)
//��S = 1^1 + 2^2 + 3^3 + ... + N^N�A�ÿ�XS���̫�@��Ʀr(�Ӧ��) 
//���D�L�{�u�n�Ҽ{�Q��ƻP�Ӧ�ƴN�n 
#include <iostream>
#include <string> 
using namespace std;
int main()
{				//0+1+4+7+6+5+6+3+6+6=47  //0+1+6+3+6+5+6+7+4+9=47 
	int table[2][10]={{0,1,4,7,6,5,6,3,6,9},{0,1,6,3,6,5,6,7,4,9}};//�Ա��Ѧ�last digit�Ѫk���Ϥ� 
	string n;			//����              	//�_�� 
	while(cin>>n)
	{
		int temp=0,sum=0;
		if(n=="0")
			break;
		if(n.length()>1)//��J����Ʀ����ƥH�W 
			temp=n[n.length()-2]-'0';//�Q���(�r���n�������) 
		else
			temp=0;//�S���Q��ơA�ҥH�O0 
		sum=temp*7;//�쥻���ӬO�n*47�A�����ץu�n�Ӧ�ơA�ҥH*7�N�n
		for(int i=1;i<=n[n.length()-1]-'0';++i)//�Ӧ�� 
		{
			sum=sum+table[temp%2][i];//�q1�}�l�O�]��sum+0�٬Osum 
		}
		cout<<sum%10<<endl;//��X�Ӧ�� 
	}
}
