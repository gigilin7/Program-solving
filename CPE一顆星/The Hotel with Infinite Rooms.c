//�@���u�঳�@�ήȦ�Φ�b�̭�
//���F�Ĥ@�ΡA��l���Ȧ�ΤH�Ƴ��|��e���@�Ϊ��H�Ʀh1�H
//�Ȧ�ΤH�Ƶ���ݦb�������Ѽ�
//�C���J���Ĥ@�ӼƦr���Ȧ�ΤH��(S)�B�ĤG�ӼƦr�����w���(D)�CS+(S+1)+(S+2)+......+(S+N)<D
//�D�b���w���(D)���Ѫ��Ȧ�ΤH�ƬO�X�H(S+N) 
#include <stdio.h>
int main(void)
{
	long long S,D;
	while(scanf("%lld%lld",&S,&D)!=EOF)
	{
		long long sum=0;//sum�O��b�������`�Ѽ� 
		for(;sum<D;S++)
		{
			sum=sum+S;
		}
		printf("%lld\n",S-1);//�]�W�����j��|�h�[�@���A�ҥH�̫�n��1 
	}
	return 0;
}
