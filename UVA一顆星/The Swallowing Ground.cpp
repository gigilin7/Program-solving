//上下的方塊是否可以接在一起
//可接:每一筆y1,y2相減的值都相同 
//注意:換行格式 
#include <iostream>
using namespace std;
int main()
{
	int n,W,y1,y2,s;
	cin>>n;
	while(n--)
	{
		int flag=0;
		cin>>W;
		cin>>y1>>y2;
		s=abs(y1-y2);
		for(int i=0;i<W-1;i++)
		{
			cin>>y1>>y2;
			if(abs(y1-y2)!=s)
				flag=1;
		}
		if(flag==1)
			cout<<"no\n";
		else
			cout<<"yes\n";
		if(n)
			cout<<'\n';
	}
}
