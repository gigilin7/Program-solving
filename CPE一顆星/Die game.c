//��l�H�F�n��_4�Ӥ�V�u�ʡA��X�̫�¤W�����@���I�ƬO�h��
//��l�۹諸2���W���I���`�M�O����7  
//�n�_�u-�F�褣�ܡA�F��u-�n�_���� 
#include <stdio.h>
#include <string.h>
int main(void)
{
	int n,i;
	char direction[6];
	while(scanf("%d",&n)!=0)//�u�X�� 
	{
		if(n==0)
			break;
		int up=1,N=2,W=3,E=4,S=5;//�٨S�u���e�¤W���O1 
		for(i=0;i<n;i++)
		{
			char direction[6]={0};
			scanf("%s",direction);
			if(strcmp(direction,"north")==0)
			{
				N=up;
				up=S;
				S=7-N;
			}
			else if(strcmp(direction,"south")==0)
			{
				S=up;
				up=N;
				N=7-S;
			}
			else if(strcmp(direction,"east")==0)
			{
				E=up;
				up=W;
				W=7-E;
			}
			else if(strcmp(direction,"west")==0)
			{
				W=up;
				up=E;
				E=7-W;
			}
		}
		printf("%d\n",up);
	}
	return 0;
}
