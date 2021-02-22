//完整版Accepted(之前寫的只有瘋狂程式會過，傳其他的會WA) 
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
				for(int j=0;j<k;j++)//判斷有沒有走到標記位置 
				{//x1,y1,d1是所有有被標記的座標跟面對的方向
					if(x==x1[j]&&y==y1[j])//注意 
					{
						flag2=1;
					}
					if(x==x1[j]&&y==y1[j]&&d==d1[j])
					{
						temp=j; 
						break;
					}
				}
				if(temp!=-1)//若走到標記位置就忽略此次指令 
					continue;
				if(d=='E')
				{
					if(x+1>m)//若會走出範圍，就把座標跟面對的方向記下來 
					{
						x1[k]=x;
						y1[k]=y;
						d1[k]=d;
						k++;//下次標記要存在下一格 
					}
					x++;
				}
				else if(d=='W')
				{
					if(x-1<0)//若會走出範圍，就把座標跟面對的方向記下來 
					{
						x1[k]=x;
						y1[k]=y;
						d1[k]=d;
						k++;//下次標記要存在下一格 
					}
					x--;
				}
				else if(d=='S')
				{
					if(y-1<0)//若會走出範圍，就把座標跟面對的方向記下來 
					{
						x1[k]=x;
						y1[k]=y;
						d1[k]=d;
						k++;//下次標記要存在下一格 
					}
					y--;
				}
				else
				{
					if(y+1>n)//若會走出範圍，就把座標跟面對的方向記下來 
					{
						x1[k]=x;
						y1[k]=y;
						d1[k]=d;
						k++;//下次標記要存在下一格 
					}
					y++;
				}
				if(x>m||y>n||x<0||y<0)//走出範圍 
				{
					if(flag2==1)//會掉出去，但因在標記處(只看座標)，所以F指令要忽略 
					{			//因F指令已執行，所以要扣回來 
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
