//��X��ìP¶�a�y���y�D(�y�D�O���)������(arc)�M����(chord)
#include <stdio.h>
#include <string.h>
#include <math.h>//sin(���׭�) 1���� = �k/ 180 * ���� 
#define r 6440
#define pi acos(-1)//arccos(-1)=�k
int main(void)
{
	char type[4];
	double arc,chord,s,a;
	while(scanf("%lf",&s)!=EOF)
	{
		scanf("%lf",&a);//���� 
		scanf("%s",type);
		if(strcmp(type,"min")==0)//�p�Gtype=="min" 
		{
			a=a/60;
		} 
		if(a>180)
		{
			a=360-a;
		}
		arc=2*pi*(r+s)*a/360;//���� 
		chord=sin((pi/180*a)/2)*(r+s)*2;//���� 
		printf("%.6lf %.6lf\n",arc,chord);
	} 
	return 0;
}
