//�D�X�C�Ӿ����H�̫᪺��m���p 
//���X��ɪ������H�|�d�U�u�аO ( scent ) �v�A�����H�᪺�����H�A�קK�L�̱q�P�@�Ӧa�豼�U�h 
//�аO�O�L�������e�Ҧb���̫�@�ӧ����I�A�H�᪺�����H�p�G����аO�B�N�|�������L���U�h�����O 
//��X��̫�Ҧb�����ЩM���諸��V
//�Y���X��ɡA�h��X�L�b�����e�A�̫᪺�Ҧb��m�M���諸��V�A�A�h�[�@�Ӧr�G LOST 
#include <stdio.h>
#include <string.h>
int main(void)
{
	int X,Y,x,y,i,j,k=0,x1[50]={0},y1[50]={0},temp;
	char d[2],d1[50],walk[50];
	scanf("%d%d",&X,&Y);//��J�@���x�Τg�a�����e(0<=X<=50�A0<=Y<=50) 
	while(scanf("%d%d",&x,&y)!=EOF)//�C�Ӿ����H�@�}�l���y�Ц�m 
	{
		int flag=0;//�аO 
		scanf("%s",d);//���諸��V 
		scanf("%s",walk);//�������H�p��ʧ@�����O 
		for(i=0;i<strlen(walk);i++)
		{
			temp=-1;
			if(walk[i]=='R')//�k�� 
			{
				if(d[0]=='N')
				{
					d[0]='E';
				}	
				else if(d[0]=='S')
				{
					d[0]='W';
				}
				else if(d[0]=='E')
				{
					d[0]='S';
				}	
				else if(d[0]=='W')
				{
					d[0]='N';
				}
			}
			else if(walk[i]=='L')//���� 
			{
				if(d[0]=='N')
				{
					d[0]='W';
				}	
				else if(d[0]=='S')
				{
					d[0]='E';
				}
				else if(d[0]=='E')
				{
					d[0]='N';
				}	
				else if(d[0]=='W')
				{
					d[0]='S';
				}
			}
			else if(walk[i]=='F')//�e�i�@�� 
			{
				if(d[0]=='N')
				{
					for(j=0;j<k;j++)//�P�_���S������аO��m 
					{
						if(x==x1[j]&&y==y1[j]&&d[0]==d1[j])
						//x1,y1,d1�O�Ҧ����Q�аO���y�и򭱹諸��V 
						{
							temp=j; 
							break;
						}
					}
					if(temp!=-1)//�Y����аO��m�N�����������O 
						continue;
					if(y+1>Y)//�Y�|���X�d��A�N��y�и򭱹諸��V�O�U�� 
					{
						x1[k]=x;
						y1[k]=y;
						d1[k]=d[0];
						k++;//�U���аO�n�s�b�U�@�� 
					}
					y++;
					if(x>X||y>Y||x<0||y<0)//���X�d�� 
					{
						flag=1;
						break;
					}
				}	
				else if(d[0]=='S')
				{
					for(j=0;j<k;j++)
					{
						if(x==x1[j]&&y==y1[j]&&d[0]==d1[j])
						{
							temp=j;
							break;
						}
					}
					if(temp!=-1)
						continue;
					if(y-1<0)
					{
						x1[k]=x;
						y1[k]=y;
						d1[k]=d[0];
						k++;
					}
					y--;
					if(x>X||y>Y||x<0||y<0)
					{
						flag=1;
						break;
					}
				}
				else if(d[0]=='E')
				{
					for(j=0;j<k;j++)
					{
						if(x==x1[j]&&y==y1[j]&&d[0]==d1[j])
						{
							temp=j;
							break;
						}
					}
					if(temp!=-1)
						continue;
					if(x+1>X)
					{
						x1[k]=x;
						y1[k]=y;
						d1[k]=d[0];
						k++;
					}
					x++;
					if(x>X||y>Y||x<0||y<0)
					{
						flag=1;
						break;
					}
				}	
				else if(d[0]=='W')
				{
					for(j=0;j<k;j++)
					{
						if(x==x1[j]&&y==y1[j]&&d[0]==d1[j])
						{
							temp=j;
							break;
						}
					}
					if(temp!=-1)
						continue;
					if(x-1<0)
					{
						x1[k]=x;
						y1[k]=y;
						d1[k]=d[0];
						k++;
					}
					x--;
					if(x>X||y>Y||x<0||y<0)
					{
						flag=1;
						break;
					}
					
				}
			}
		}
		if(flag==1)
			printf("%d %d %c LOST\n",x1[k-1],y1[k-1],d1[k-1]);
		else
			printf("%d %d %s\n",x,y,d);
	}
	return 0;
} 
