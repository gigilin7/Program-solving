//�b���J�Ʀr���d�򤺡A��X�@�Ʀr�b�g�L�S��B���A���̦h�����B�⦸�� 
#include <stdio.h>
int main(void)
{
	int i,j,o,cl=0,temp=1,o2,i2,j2,k,big,small;
	 //cl�Ocycle length, temp�O�N��cl�], o2�O�ƽd�򤺪��Ʀr, o�O���Ʀr�P�_ 
	for(k = 0;k<1000;k++) //�G�N�]�j�d���J���� 
	{
		scanf("%d",&i);
		scanf("%d",&j);
		if(i == i2 && j == j2) //�]���p�G��J�����Ƥ���1000���A�{���|�ۤv���ư���̫�@������J 
			break;             //�ҥH�p�G�{���}�l�ۤv���ƿ�J�N�N��ڨS���A��J�ȡA�N�����{�� 
		if(i>=j)//�P�_��J����ӼƦr�֤j�֤p 
		{
			big=i;
			small=j;
		}
		else
		{
			big=j;
			small=i;
		}
		for(o2=small;o2<=big;o2++)
		{
			o=o2;
			while(o!=1)//�D�ص����B��覡 
			{
				if(o%2==1)
					o=3*o+1;
				else
					o=o/2;
				temp++;
			}
			if(cl>=temp)
				cl=cl;
			else
				cl=temp;
			temp=1;	//�]��o����1�]�n��@�� 
		}
		printf("%d %d %d\n",i,j,cl);
		cl = 0; //�p�⧹�Ĥ@�ժ�cl��n�k0 
		i2 = i;
		j2 = j;
	}
	
	return 0;
}
	
