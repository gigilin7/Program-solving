//�w��ax+by=d=GCD(a,b)�A�Dx,y,d 
//����۰��k
//�X�i�ڴX���w��k:
//�]��B*X1+A%B*Y1=GCD(B,A%B) =GCD(A,B)=A*X+B*Y
//�ҥHB*X1+(A-A/B*B)*Y1=A*X+B*Y
//A*Y1+B*(X1-A/B*Y1)=A*X+B*Y
//��O�G X=Y1,Y=(X1-A/B*Y1)
//�]���A�o�X�] A*X+B*Y=GCD(A,B)��X,Y�ѡ^
//���סG
//��B=0�ɡAGCD(A,B)=A�A�ܩ���AX=1,Y=0�O��
//��B!=0�ɡA�u�ݻ��k�A�DB*X1+A%B*Y1=GCD(B,A%B)���ѡA�D�XX1,Y1���Ѫ��ƭȤ���A�۵M�i�H�D�XX, Y
#include <iostream>
using namespace std;

void ex_gcd(int a,int b,int &d,int &x,int &y)//���n 
{                      //�[&(function���~)�Ȥ~�|������ 
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
