//��X�~����b�|(r)�A���P��(2*PI*r) 
// a/sinA = b/sinB = c/sinC = 2*r (����) 
//cos(A) = (b^2+c^2-a^2)/2*b*c (�l��) 
// A = arrcos((b^2+c^2-a^2)/2*b*c)
//���I�Z��:((x2-x1)^2+(y2-y1)^2)�}�ڸ� 
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double PI=3.141592653589793;
	double x1,y1,x2,y2,x3,y3;
	double r,a,b,c,t;
	while(cin>>x1>>y1>>x2>>y2>>x3>>y3)
	{
		a=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
		b=sqrt(pow(x3-x2,2)+pow(y3-y2,2));
		c=sqrt(pow(x3-x1,2)+pow(y3-y1,2));
		t=acos((pow(b,2)+pow(c,2)-pow(a,2))/(2*b*c));
		r=a/(sin(t)*2);
		printf("%.2lf\n",2*PI*r);
	}
} 
