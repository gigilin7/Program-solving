//uva151 
//題目說最開始要停1號，所以問題轉化為從2到N中去m的約瑟夫環，最後取13
//轉化為：從1到N-1中去m的約瑟夫環，最後取12
//因為編號從0開始編比較好算，所以真正最後的點會變成11 
//約瑟夫問題（ Josephus Problem ） 
#include <iostream>
using namespace std;
int main()
{
	int N,off,m;
	while(cin>>N&&N)
	{
		for(m=1;m<1000;m++)//不確定多大先設1000 
		{
			off=0;//停電區號 
			for(int i=1;i<N;i++)//重要公式!!! 
			{
				off=(off+m)%i;
			}
			if(off==11)
				break;
		}
		cout<<m<<'\n';
	}
}
