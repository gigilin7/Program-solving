//�Y��Ӥ����Ȥ��O���@�ө_�ƻP�@�Ӱ��ơA�h�N�_�ƱƦb���ƫe���C
//�Y��Ӥ����Ҭ��_�ơA�h���j���_�ƱN�Ʀb���p���_�ƫe���C
//�Y��Ӥ����Ҭ����ơA�h���p�����ƱN�Ʀb���j�����ƫe���C
#include <iostream>
#include <algorithm>//sort() 
using namespace std;
int m;//main��function���ΦP�@���ܼƭ�(global variable)  
bool compare(int x,int y) 
{
	int x1=abs(x%2);//�P�_�_�ư��� 
	int y1=abs(y%2);
	
	if(x%m!=y%m) //�l�ƶV�p�V�W�� 
		return x%m<y%m;
	if(x1==0&&y1==0) //���O���� 
		return x<y;
	else if(x1==y1) //���O�_�� 
		return x>y;
	else if(x1!=y1) //�@�ө_�ơA�@�Ӱ��� 
		return x1;//�_��:x1=1,����:x1=0; 
}
int main()
{
	int i,n,num[10000];
	while(cin>>n>>m)//n�O���X�ӼƦr�Am�O�Ʀr������ 
	{
		cout<<n<<" "<<m<<endl;
		if(n==0)
			break;
		for(i=0;i<n;i++)
		{
			cin>>num[i];
		}
		sort(num,num+n,compare);//�Ƨ� 
		for(i=0;i<n;i++)
		{
			cout<<num[i]<<endl;
		}
	}
	return 0;
}
