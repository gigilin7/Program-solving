//3���P 
//�t�Ƭ�����Ӽh�A���ƫh���Ŧ�Ӽh�A����ȫh�O���n�A��X�̤j�Ӽh�� 
//�����]�t�H�U��ӱ���: 
//1.�C�ӼӼh�����n�����j�󥦤W�@�h�����n
//2.�۾F����ӼӼh�C�⥲�����P(�@���@�t)
//�Ҥl:7 -2 6 9 -3 sort-> 9 7 6 -3 -2 ��X:2  
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int compare(int a,int b)
{
	return abs(a)>abs(b);//�j��p 
}
int main()
{
	int p,n,flag;
	cin>>p;//�X����� 
	for(int i=0;i<p;i++)
	{
		cin>>n;//�i�μӼh�� 
		int floor[n]={0};
		int sum=1;//�L�צp�󳣦��@�h�� 
		for(int j=0;j<n;j++)
		{
			cin>>floor[j];
		}
		sort(floor,floor+n,compare);//�N�Ʀr�j��p��
									//(���ޥ��t��) 
		if(floor[0]>0)
			flag=1;
		else
			flag=0;
			
		for(int j=1;j<n;j++)
		{
			if(flag)
			{
				if(floor[j]<0)
				{
					flag=0;
					sum++;
				}
			}
			else
			{
				if(floor[j]>0)
				{
					flag=1;
					sum++;
				}
			}
		}
		cout<<sum<<endl;
	}
} 
