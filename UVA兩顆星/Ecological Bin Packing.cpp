//三個桶子裡依序各有三個不同顏色(棕綠透明bgc)的瓶子 
//將瓶子移動使每桶只有單一顏色
//找出最小移動瓶數&每桶的顏色分別是甚麼(大寫) 
//六種可能: bcg bgc cbg cgb gbc gcb
#include <iostream>
using namespace std;
int main()
{
	int g1,b1,c1,g2,b2,c2,g3,b3,c3;
	while(cin>>b1>>g1>>c1>>b2>>g2>>c2>>b3>>g3>>c3)
	{
		int bottle[6]={0};
		int all=g1+b1+c1+g2+b2+c2+g3+b3+c3;
		bottle[0]=all-b1-c2-g3;
		bottle[1]=all-b1-g2-c3;
		bottle[2]=all-c1-b2-g3;
		bottle[3]=all-c1-g2-b3;
		bottle[4]=all-g1-b2-c3;
		bottle[5]=all-g1-c2-b3;
		int min=bottle[0],pos=0;
		for(int i=1;i<6;i++)
		{
			if(bottle[i]<min)
			{
				min=bottle[i];
				pos=i;
			}
		}
		if(pos==0)
			cout<<"BCG ";
		else if(pos==1)
			cout<<"BGC ";
		else if(pos==2)
			cout<<"CBG ";
		else if(pos==3)
			cout<<"CGB ";
		else if(pos==4)
			cout<<"GBC ";
		else
			cout<<"GCB ";
		cout<<min<<'\n';
	}
} 
