//��X�٧Ϊ��ĥ|���I(��J�|������I�O�@�˪�)
//(�٧�)�﨤�u���I�ۥ[���M����t�@���﨤�u���I�ۥ[���M(a+d=b+c)
// a--b
// | |
//c--d
#include <stdio.h>
int main(void)
{
	double a,b,x[5]={0},y[5]={0};
	int i,j;
	while(scanf("%lf",&a)!=EOF)//��J�y��(x,y) 
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
		
		for(i=0;i<3;i++)//��X����Ӯy�ЬۦP(�L���﨤�u�y�дN�O����) 
		{
			for(j=i;j<3;j++)
			{
				if(x[i]==x[j+1]&&y[i]==y[j+1])
				{
					if(i==0&&j+1==1)//�@�G�ۦP 
					{
						x[4]=x[2]+x[3]-x[0];
						y[4]=y[2]+y[3]-y[0];
					}	
					else if(i==0&&j+1==2)//�@�T�ۦP 
					{
						x[4]=x[1]+x[3]-x[0];
						y[4]=y[1]+y[3]-y[0];
					}
					else if(i==0&&j+1==3)//�@�|�ۦP 
					{
						x[4]=x[1]+x[2]-x[0];
						y[4]=y[1]+y[2]-y[0];
					}
					else if(i==1&&j+1==2)//�G�T�ۦP 
					{
						x[4]=x[0]+x[3]-x[1];
						y[4]=y[0]+y[3]-y[1];
					}
					else if(i==1&&j+1==3)//�G�|�ۦP 
					{
						x[4]=x[0]+x[2]-x[1];
						y[4]=y[0]+y[2]-y[1];
					}
					else if(i==2&&j+1==3)//�T�|�ۦP 
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
