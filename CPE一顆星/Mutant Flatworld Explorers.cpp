//���㪩Accepted(���e�g���u���ƨg�{���|�L�A�Ǩ�L���|WA) 
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int m,n,x,y,x1[50]={0},y1[50]={0},k=0;
	char d,walk[50],d1[50]={0};
	cin>>m>>n;
	while(cin>>x>>y>>d)
	{
		cin>>walk;
		int flag=0,flag2=0;
		for(int i=0;i<strlen(walk);i++)
		{
			int temp=-1;
			if(walk[i]=='R')
			{
				if(d=='E')
					d='S';
				else if(d=='W')
					d='N';
				else if(d=='S')
					d='W';
				else
					d='E';
			}
			else if(walk[i]=='L')
			{
				if(d=='E')
					d='N';
				else if(d=='W')
					d='S';
				else if(d=='S')
					d='E';
				else
					d='W';	
			}
			else
			{
				for(int j=0;j<k;j++)//�P�_���S������аO��m 
				{//x1,y1,d1�O�Ҧ����Q�аO���y�и򭱹諸��V
					if(x==x1[j]&&y==y1[j])//�`�N 
					{
						flag2=1;
					}
					if(x==x1[j]&&y==y1[j]&&d==d1[j])
					{
						temp=j; 
						break;
					}
				}
				if(temp!=-1)//�Y����аO��m�N�����������O 
					continue;
				if(d=='E')
				{
					if(x+1>m)//�Y�|���X�d��A�N��y�и򭱹諸��V�O�U�� 
					{
						x1[k]=x;
						y1[k]=y;
						d1[k]=d;
						k++;//�U���аO�n�s�b�U�@�� 
					}
					x++;
				}
				else if(d=='W')
				{
					if(x-1<0)//�Y�|���X�d��A�N��y�и򭱹諸��V�O�U�� 
					{
						x1[k]=x;
						y1[k]=y;
						d1[k]=d;
						k++;//�U���аO�n�s�b�U�@�� 
					}
					x--;
				}
				else if(d=='S')
				{
					if(y-1<0)//�Y�|���X�d��A�N��y�и򭱹諸��V�O�U�� 
					{
						x1[k]=x;
						y1[k]=y;
						d1[k]=d;
						k++;//�U���аO�n�s�b�U�@�� 
					}
					y--;
				}
				else
				{
					if(y+1>n)//�Y�|���X�d��A�N��y�и򭱹諸��V�O�U�� 
					{
						x1[k]=x;
						y1[k]=y;
						d1[k]=d;
						k++;//�U���аO�n�s�b�U�@�� 
					}
					y++;
				}
				if(x>m||y>n||x<0||y<0)//���X�d�� 
				{
					if(flag2==1)//�|���X�h�A���]�b�аO�B(�u�ݮy��)�A�ҥHF���O�n���� 
					{			//�]F���O�w����A�ҥH�n���^�� 
						if(d=='N')
							y--;
						if(d=='S')
							y++;
						if(d=='E')
							x--;
						if(d=='W')
							x++;
						flag2=0;
					}
					else
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
			printf("%d %d %c\n",x,y,d);
	}
} 
