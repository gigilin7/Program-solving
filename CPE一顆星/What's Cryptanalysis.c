//�b�Ҧ�����J���A��X�C�Ӧ��X�{���r�����X�ӦL�X
//(�ƶq�Ѥj��p�C�X�A�Y�ƶq�@�ˡA�h�r���Ѥp��j�C�X) 
#include <stdio.h>
#include <string.h>
int main(void)
{
	char input[1000]={0},in[1000]={0},upper='A',lower='a',atoz[27],temp2;
	int i=0,j=0,k=0,l=0,output[27]={0},temp=0,lines;
	
	scanf("%d",&lines);//�M�w���X���J 
	for(i=0;i<=lines;i++)//��ԣ�Oi<=lines�Ӥ��Oi<lines? 
	{
		gets(in);//�C���J 
		strcat(input,in);//��C���J��iinput�� 
	}
	for(k=0;k<strlen(input);k++)//�P�_A��Z�C�Ӧr�����X�ӡA�æs��output�� 
	{
		for(l=0,upper='A',lower='a';l<=26;l++)
		{
			if(input[k]==upper||input[k]==lower)//�j�p�g����A�pAa��2�� 
			{
				output[l]++;
				break;
			}
			else
			{
				upper++;
				lower++;
			}
		}
	}
	for(i=0,upper='A';i<26;i++)//��atoz�̩�A��Z
	{
		atoz[i]=upper;
		upper++;
	}
	for(i=0;i<26;i++)//�Ƨ� 
	{
		for(k=0;k<26;k++)
		{
			if(output[i]==0)
			{
				break;
			}
			
			if(output[i]>output[k])//�p�G�e>��A�N�洫����(�]�A�r��������&�r������) 
			{
				temp=output[i];
				output[i]=output[k];
				output[k]=temp;
					
				temp2=atoz[i];
				atoz[i]=atoz[k];
				atoz[k]=temp2;
				
			}
			else if(output[i]==output[k] && atoz[i]<atoz[k])
			//�p�G�e��ۦP�A�B�e�����r����᭱�p(�pA<B)�A�N�洫�r������ 
			{
				temp2=atoz[i];
				atoz[i]=atoz[k];
				atoz[k]=temp2;
			}
			
			
		}	
	}
	for(i=0;i<26;i++)
	{
		if(output[i]>0)//�r�����Ƭ�0�N���L�X 
		{
			printf("%c ",atoz[i]);
			printf("%d\n",output[i]);
		}
			
	}
	return 0;
}
