//�p��C�տ�J���U�ؾ���h�֦ʤ��� (�@�զ��ܦh�ӿ�J) 
//�]��C�S��map�ҥH��C++�g 
#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
	int n;
	string tree;
	cin>>n; //��J���X�� 
	getline(cin,tree);//�J�촫��N��U�@�ӿ�J 
	getline(cin,tree);//�n�����getline(cin,tree)�O�]�����D�����u�@�տ�J 
	while(n--)
	{
		map<string,int> record; //map�����n�ŧi 
		map<string,int>::iterator i; //map�����n�ŧi (iterator����pointer���Ϊk) 
		int sum=0; //�⦹�դ��@���X�ʾ� 
		while(getline(cin,tree))
		{
			if(tree.compare("")==0)//�P�_���լO�_������J�A�]�C�տ�J�e���|���ťչj�}(�N�O�L��J) 
				break;             //�ҥH�n����p�G�S��J�ȡA�N�N���տ�J����(�ťի�O�U��) 
			record[tree]++;  //�N�C����J����@����(��C�ؾ𦳥X�{�X��) 
			sum++;
		}
		
		for(i=record.begin();i!=record.end();i++)//�N�����̪��F�讳�X�ӦL 
		{ //�]�i��cout << i->first << " " << fixed << setprecision(4) << i->second*100.0/sum; 
			printf("%s %.4f\n",(*i).first.data(),(*i).second*100.0/sum);
		}          //first�O���ؾ𪺦W�١Asecond�O���ؾ�X�{����
		           //data()�O�n��string���Ȯ��X�ӥ����[�� 
		
		if(n)//n�O0�N������ 
			cout<<endl;
	}
	
}
