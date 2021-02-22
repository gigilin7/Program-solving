//求出每個機器人最後的位置狀況 
//走出邊界的機器人會留下「標記 ( scent ) 」，提醒以後的機器人，避免他們從同一個地方掉下去 
//標記是他掉落之前所在的最後一個坐標點，以後的機器人如果走到標記處就會忽略讓他掉下去的指令 
//輸出其最後所在的坐標和面對的方向
//若掉出邊界，則輸出他在掉落前，最後的所在位置和面對的方向，再多加一個字： LOST 
#include <stdio.h>
#include <string.h>
int main(void)
{
	int X,Y,x,y,i,j,k=0,x1[50]={0},y1[50]={0},temp;
	char d[2],d1[50],walk[50];
	scanf("%d%d",&X,&Y);//輸入一塊矩形土地的長寬(0<=X<=50，0<=Y<=50) 
	while(scanf("%d%d",&x,&y)!=EOF)//每個機器人一開始的座標位置 
	{
		int flag=0;//標記 
		scanf("%s",d);//面對的方向 
		scanf("%s",walk);//讓機器人如何動作的指令 
		for(i=0;i<strlen(walk);i++)
		{
			temp=-1;
			if(walk[i]=='R')//右轉 
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
			else if(walk[i]=='L')//左轉 
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
			else if(walk[i]=='F')//前進一格 
			{
				if(d[0]=='N')
				{
					for(j=0;j<k;j++)//判斷有沒有走到標記位置 
					{
						if(x==x1[j]&&y==y1[j]&&d[0]==d1[j])
						//x1,y1,d1是所有有被標記的座標跟面對的方向 
						{
							temp=j; 
							break;
						}
					}
					if(temp!=-1)//若走到標記位置就忽略此次指令 
						continue;
					if(y+1>Y)//若會走出範圍，就把座標跟面對的方向記下來 
					{
						x1[k]=x;
						y1[k]=y;
						d1[k]=d[0];
						k++;//下次標記要存在下一格 
					}
					y++;
					if(x>X||y>Y||x<0||y<0)//走出範圍 
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
