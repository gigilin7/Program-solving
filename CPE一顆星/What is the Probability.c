//���]��Ӿ��v�Gp�B����v�Gq=1-p
//�C���C���@��R�Ӧ^�X�B��N�ӤH�ѻP�C���B��I�ӤH��ӡA�D�X��Ӫ̪����v 
//�ϥε���żƾ�z�C�Ӧ^�X��Ӫ����v�N�i�H��o�������G(q^(k-1)*p) * (1-(q^n^R)) / (1-q^n)�C
//(�����G(q^(k-1)*p)�B����Gq^n)
#include <stdio.h>
#include <math.h>//��pow()�p��X�Y�ƪ��Y����� 
#define Round 50 //�D�بS���n�X�^�X�A�ҥH�N���]��50�^�X 
int main(void)
{
	int S,N,I,i=0;
	double p,q,a1,r,answer;
	scanf("%d",&S);//���h�ֲմ��ո��
	for(i=0;i<S;i++)
	{
		scanf("%d",&N);//�ѥ[�C���H��
		scanf("%lf",&p);//��Ӫ����v
		scanf("%d",&I);//�ĴX�ӤH���
		q=1-p;//�骺���v 
		a1=pow(q,I-1)*p;//���� 
		r=pow(q,N);//���� 
		if(p==0)
		{
			printf("0.0000\n");
		}
		else
		{
			answer=a1*(1-pow(r,Round))/(1-r);//�ε���żƤ�����X 
			printf("%.4lf\n",answer);
		}
	}
	
	return 0;
} 
