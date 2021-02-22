//遞迴運作模式參考 
#include <iostream>
using namespace std;
void a(int x)
{
	if(x==5)
		cout<<"*"<<endl;
	else
	{
		a(x+1);
		cout<<x<<endl;
	}
}
int main()
{
	int x=0;
	a(x);
} 
