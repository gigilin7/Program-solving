//���A�C�ӾǥͮȹC�ɥX����
//�ЧA��X�̤֦��h�ֿ��n�洫�]�N�O�X���֪��H�������X���h���H�^
//�ϱo�C�ӤH�ҥX�������ɥi�౵�� (�u��~�t0.01) 
//�`�N:��floor(?+0.5)�|�ˤ��J�A�]�������Y�����round(?) 
//�]���p���I���D�A�ҥH���N��*100�p��A�̫�A/100 
//�ҥ~:6 0.00 0.00 0.00 0.00 0.00 0.02 ��:$0.01 
#include <iostream>
#include <cmath> 
using namespace std;
int main()
{
	int n;
	while(cin>>n&&n)
	{
		float money[1000],sum=0,avg;
		float min1=0,min2=0;
		for(int i=0;i<n;i++)
		{
			cin>>money[i];
			money[i]=money[i]*100;
			sum=sum+money[i];	
		}
		avg=sum/n;
		if(avg>0&&avg<1)//�ҥ~ !!! 
			avg=1;
		else
			avg=floor(avg+0.5);//����round(avg)
		for(int i=0;i<n;i++)
		{
			if(money[i]>avg)
			{
				min1=min1+(money[i]-avg);
			}
			else
				min2=min2+(avg-money[i]);
		}
		if(min1>min2)
			printf("$%.2f\n",min2/100);
		else
			printf("$%.2f\n",min1/100);
	}
} 
