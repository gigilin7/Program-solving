//��X��G�i��Ʀr���̤j���]��
//�p�G�O1�A�LLove is not all you need!
//�p�G���O1�A�LAll you need is love! 
#include <stdio.h>
#include <string.h>
#include <math.h>//pow(x,y)-> x��y���� 
int main(void)
{
	int i,j,count=1,n,len1,len2;
	char s1[30]={0},s2[30]={0};
	scanf("%d",&n);//���X�տ�J(�@�զ��ⵧ���) 
	for(i=0;i<n;i++)
	{
		int S1=0,S2=0;
		char s1[30]={0};
		char s2[30]={0};
		scanf("%s",s1);//����gets(s1)�O�]��gets(s1)�|�⴫��]��i�h 
		scanf("%s",s2);
		strrev(s1);//�N�@���J�˹L�Ӧs(�p1100��0011) 
		strrev(s2);
		len1=strlen(s1); 
		len2=strlen(s2);
		for(j=0;j<len1;j++)//�Ĥ@����� 
		{
			if(s1[j]=='1')//�N�쥻�r��1��ASCII�X�ഫ�����1 
				s1[j]=s1[j]-'1'+1;
			else
				s1[j]=s1[j]-'0';
			
			S1=S1+s1[j]*pow(2,j);//S1�O�G�i�쪺s1�ഫ���Q�i�쪺�� 
		}
		for(j=0;j<len2;j++)//�ĤG����� 
		{
			if(s2[j]=='1')
				s2[j]=s2[j]-'1'+1;
			else
				s2[j]=s2[j]-'0';
			
			S2=S2+s2[j]*pow(2,j);
		}
		
		while(S2!=0)//gcd(��X�̤j���]��) 
		{
			int temp=S1%S2;
			S1=S2;
			S2=temp;
		}
		printf("Pair #%d: ",count++);
		if(S1==1)//S1�{�b�O�̤j���]�� 
			printf("Love is not all you need!\n");
		else
			printf("All you need is love!\n");
	}
	return 0;
}
