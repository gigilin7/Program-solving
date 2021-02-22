#include <iostream>
#include <stdio.h>
#include <string.h>
#include <vector>
using namespace std;

vector< vector<int> > block(25);//vector<int> block[25]�]�i�� 

int pos[25];//�C�ӼƦr�ثe�bblock������m 
//�N��bx�᪺�Ʀr(�]�Ax)���k�^��� 
void init_pos(int x)
{
	int px=pos[x];
	while(block[px].back()!=x)
	{
		int num=block[px].back();//�n�Q���ʪ��Ʀr
		block[num].push_back(num);
		pos[num]=num;
		block[px].pop_back();//�R���̫�@�ӼƦr 
	}
}
//�N��bx�᪺�Ʀr(�]�Ax)�����y�� 
void aTOb(int x,int y)
{
	int px=pos[x],py=pos[y];
	int temp[25]={0},temp2[25]={0},count=0;
	for(int i=block[px].size()-1,j=0;;i--,j++)
	{
		temp[j]=block[px].at(i);//�n�Q���ʪ��Ʀr(�˵ۦs) 
		count++;//�X�ӼƦr�n�Q���� 
		if(block[px].at(i)==x)
		{
			block[px].pop_back();
			break;
		}
		block[px].pop_back();		
	}
	for(int i=0,j=count-1;j>=0;i++,j--)
	{
		temp2[i]=temp[j];//�n�Q���ʪ��Ʀr(���ۦs)
	}
	block[py].insert(block[py].end(),temp2,temp2+count);
	for(int i=0;i<count;i++)
	{
		pos[temp[i]]=py;//�Q���ʪ��Ʀr�]�n���m 
	}
}

int main()
{
	int n,a,b;
	char action1[5],action2[5];
	while(scanf("%d",&n)!=EOF)
	{
		for(int i=0;i<n;i++)//�]�w��l�� 
		{
			block[i].clear();
			block[i].push_back(i);
			pos[i]=i;
		}
		while(scanf("%s",&action1))
		{
			if(strcmp(action1,"quit")==0)
				break;
			scanf("%d%s%d",&a,&action2,&b);
			if(a==b||pos[a]==pos[b])
				continue;
			if(strcmp(action1,"move")==0)
			{
				init_pos(a);
			}
			if(strcmp(action2,"onto")==0)
			{
				init_pos(b);
			} 
			
			aTOb(a,b);
		}
		for(int i=0;i<n;i++)//�L 
		{
			cout<<i<<":";
			for(int j=0;j<block[i].size();j++)
			{
				 cout<<" "<<block[i][j];
			}
			cout<<'\n';
		}
	}
}
