#include <iostream>
#include <stdio.h>
#include <string.h>
#include <vector>
using namespace std;

vector< vector<int> > block(25);//vector<int> block[25]也可用 

int pos[25];//每個數字目前在block當中的位置 
//將堆在x後的數字(包括x)都歸回原位 
void init_pos(int x)
{
	int px=pos[x];
	while(block[px].back()!=x)
	{
		int num=block[px].back();//要被移動的數字
		block[num].push_back(num);
		pos[num]=num;
		block[px].pop_back();//刪除最後一個數字 
	}
}
//將堆在x後的數字(包括x)都堆到y後 
void aTOb(int x,int y)
{
	int px=pos[x],py=pos[y];
	int temp[25]={0},temp2[25]={0},count=0;
	for(int i=block[px].size()-1,j=0;;i--,j++)
	{
		temp[j]=block[px].at(i);//要被移動的數字(倒著存) 
		count++;//幾個數字要被移動 
		if(block[px].at(i)==x)
		{
			block[px].pop_back();
			break;
		}
		block[px].pop_back();		
	}
	for(int i=0,j=count-1;j>=0;i++,j--)
	{
		temp2[i]=temp[j];//要被移動的數字(正著存)
	}
	block[py].insert(block[py].end(),temp2,temp2+count);
	for(int i=0;i<count;i++)
	{
		pos[temp[i]]=py;//被移動的數字也要改位置 
	}
}

int main()
{
	int n,a,b;
	char action1[5],action2[5];
	while(scanf("%d",&n)!=EOF)
	{
		for(int i=0;i<n;i++)//設定初始值 
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
		for(int i=0;i<n;i++)//印 
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
