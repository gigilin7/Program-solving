//找出菱形的第四個點(輸入會有兩個點是一樣的)
//(菱形)對角線的點相加的和等於另一條對角線的點相加的和(a+d=b+c)
// a--b
// | |
//c--d
#include <stdio.h>
int main(void)
{
	double a,b,x[5]={0},y[5]={0};
	int i,j;
	while(scanf("%lf",&a)!=EOF)//輸入座標(x,y) 
	{
		scanf("%lf",&b);
		x[0]=a;
		y[0]=b;
		scanf("%lf",&a);
		scanf("%lf",&b);
		x[1]=a;
		y[1]=b;
		scanf("%lf",&a);
		scanf("%lf",&b);
		x[2]=a;
		y[2]=b;
		scanf("%lf",&a);
		scanf("%lf",&b);
		x[3]=a;
		y[3]=b;
		
		for(i=0;i<3;i++)//找出哪兩個座標相同(他的對角線座標就是答案) 
		{
			for(j=i;j<3;j++)
			{
				if(x[i]==x[j+1]&&y[i]==y[j+1])
				{
					if(i==0&&j+1==1)//一二相同 
					{
						x[4]=x[2]+x[3]-x[0];
						y[4]=y[2]+y[3]-y[0];
					}	
					else if(i==0&&j+1==2)//一三相同 
					{
						x[4]=x[1]+x[3]-x[0];
						y[4]=y[1]+y[3]-y[0];
					}
					else if(i==0&&j+1==3)//一四相同 
					{
						x[4]=x[1]+x[2]-x[0];
						y[4]=y[1]+y[2]-y[0];
					}
					else if(i==1&&j+1==2)//二三相同 
					{
						x[4]=x[0]+x[3]-x[1];
						y[4]=y[0]+y[3]-y[1];
					}
					else if(i==1&&j+1==3)//二四相同 
					{
						x[4]=x[0]+x[2]-x[1];
						y[4]=y[0]+y[2]-y[1];
					}
					else if(i==2&&j+1==3)//三四相同 
					{
						x[4]=x[0]+x[1]-x[2];
						y[4]=y[0]+y[1]-y[2];
					}
						
				}
					
			}
		}
		printf("%.3lf %.3lf\n",x[4],y[4]);
	}
	return 0;
}
