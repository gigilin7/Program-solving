//uva151 
//�D�ػ��̶}�l�n��1���A�ҥH���D��Ƭ��q2��N���hm����������A�̫��13
//��Ƭ��G�q1��N-1���hm����������A�̫��12
//�]���s���q0�}�l�s����n��A�ҥH�u���̫᪺�I�|�ܦ�11 
//����Ұ��D�] Josephus Problem �^ 
#include <iostream>
using namespace std;
int main()
{
	int N,off,m;
	while(cin>>N&&N)
	{
		for(m=1;m<1000;m++)//���T�w�h�j���]1000 
		{
			off=0;//���q�ϸ� 
			for(int i=1;i<N;i++)//���n����!!! 
			{
				off=(off+m)%i;
			}
			if(off==11)
				break;
		}
		cout<<m<<'\n';
	}
}
