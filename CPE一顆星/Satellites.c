//算出兩衛星繞地球的軌道(軌道是圓形)的弧長(arc)和弦長(chord)
#include <stdio.h>
#include <string.h>
#include <math.h>//sin(弧度值) 1弧度 = π/ 180 * 角度 
#define r 6440
#define pi acos(-1)//arccos(-1)=π
int main(void)
{
	char type[4];
	double arc,chord,s,a;
	while(scanf("%lf",&s)!=EOF)
	{
		scanf("%lf",&a);//角度 
		scanf("%s",type);
		if(strcmp(type,"min")==0)//如果type=="min" 
		{
			a=a/60;
		} 
		if(a>180)
		{
			a=360-a;
		}
		arc=2*pi*(r+s)*a/360;//弧長 
		chord=sin((pi/180*a)/2)*(r+s)*2;//弦長 
		printf("%.6lf %.6lf\n",arc,chord);
	} 
	return 0;
}
