#include <iostream>
using namespace std;
int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		if(n==0&&m==0)
			break;
		cout<<".";
		int appear[1000]={0},count=1,flag=0;
		while(n!=0)
		{
			if(count%50==0)
				cout<<'\n';
			appear[n]=count;//�����l�ƥX�{���� 
			count++;//�X�{���� 
			printf("%d",n*10/m);//�� 
			n=n*10%m;//�l�� 
			if(appear[n])//�l�ƶ}�l���� 
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
			printf("\nThe last %d digits repeat forever.\n",count-appear[n]);
		else
			printf("\nThis expansion terminates.\n");
		cout<<'\n';
	}	
} 
//�Q�Ϊ����k���覡�A�䭼10�䰣�A��l�Ƥw�g���ƥX�{�ɡA�Y�}�l�`���F�C
//�O�U�l�ƥX�{�����ǡA�N�i���D�q���}�l�`���F�C
//p.s. �`���`�����פ��|�j������C

