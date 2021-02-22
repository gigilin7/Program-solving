//找出起點座標(x1,y1)跟終點座標(x2,y2)之間移動多少距離(幾步) 
#include <stdio.h>
int main(void)
{
	int i,n,x1,y1,x2,y2;
	int count=0;//數走了幾步 
	scanf("%d",&n);//有幾組座標(一組有兩個座標) 
	for(i=0;i<n;i++)
	{
		count=0;
		scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
		while(x1!=x2||y1!=y2) //x1==x2&&y1==y2跳出迴圈 
		{
			//從y軸一步一步走到x軸(左上) 
			while(y1!=0) 
			{
				if(x1==x2&&y1==y2)
					break;
				x1++;
				y1--;
				count++;
			}
			if(x1==x2&&y1==y2)
				break;
			//從x軸滑一步到y軸(右下) 
			y1=x1+1;
			x1=0;
			count++;
		}
		printf("Case %d: %d\n",i+1,count);
	}
	return 0;
}
