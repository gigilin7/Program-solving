//已知ax+by=d=GCD(a,b)，求x,y,d 
//輾轉相除法
//擴展歐幾里德算法:
//因為B*X1+A%B*Y1=GCD(B,A%B) =GCD(A,B)=A*X+B*Y
//所以B*X1+(A-A/B*B)*Y1=A*X+B*Y
//A*Y1+B*(X1-A/B*Y1)=A*X+B*Y
//於是： X=Y1,Y=(X1-A/B*Y1)
//因此，得出（ A*X+B*Y=GCD(A,B)的X,Y解）
//結論：
//當B=0時，GCD(A,B)=A，很明顯，X=1,Y=0是解
//當B!=0時，只需遞歸，求B*X1+A%B*Y1=GCD(B,A%B)的解，求出X1,Y1的解的數值之後，自然可以求出X, Y
#include <iostream>
using namespace std;

void ex_gcd(int a,int b,int &d,int &x,int &y)//重要 
{                      //加&(function內外)值才會都改變 
	if(!b)
	{
		d=a;
		x=1;
		y=0;
	}
	else
	{
		ex_gcd(b,a%b,d,y,x);
		y=y-x*(a/b);
	}
}

int main()
{
	int a,b,d,x,y;
	while(cin>>a>>b)
	{
		ex_gcd(a,b,d,x,y);
		cout<<x<<' '<<y<<' '<<d<<'\n';
	}
} 
