#include <iostream>
#include <algorithm>
using namespace std;
int m;
bool compare(int x,int y)
{
	int x1=abs(x%2);
	int y1=abs(y%2);
	if(x%m!=y%m)
		return x%m<y%m;
	if(x1==1&&y1==1)
		return x>y;
	else if(x1==0&&y1==0)
		return x<y;
	else if(x1!=y1)//­«­n 
		return  x1;
}
int main()
{
	int n,num[10000];
	while(cin>>n>>m)
	{
		cout<<n<<" "<<m<<'\n';
		if(n==0&m==0)
			break;
		for(int i=0;i<n;i++)
		{
			cin>>num[i];
		}
		sort(num,num+n,compare);
		for(int i=0;i<n;i++)
		{
			cout<<num[i]<<'\n';
		}
	}
} 
