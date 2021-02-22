//璝ㄢじだ计籔案计玥盢计逼案计玡
//璝ㄢじ计玥耕计盢逼耕计玡
//璝ㄢじ案计玥耕案计盢逼耕案计玡
#include <iostream>
#include <algorithm>//sort() 
using namespace std;
int m;//main蛤function常ノ跑计(global variable)  
bool compare(int x,int y) 
{
	int x1=abs(x%2);//耞计案计 
	int y1=abs(y%2);
	
	if(x%m!=y%m) //緇计禫禫 
		return x%m<y%m;
	if(x1==0&&y1==0) //常琌案计 
		return x<y;
	else if(x1==y1) //常琌计 
		return x>y;
	else if(x1!=y1) //计案计 
		return x1;//计:x1=1,案计:x1=0; 
}
int main()
{
	int i,n,num[10000];
	while(cin>>n>>m)//n琌Τ碭计m琌计埃计 
	{
		cout<<n<<" "<<m<<endl;
		if(n==0)
			break;
		for(i=0;i<n;i++)
		{
			cin>>num[i];
		}
		sort(num,num+n,compare);//逼 
		for(i=0;i<n;i++)
		{
			cout<<num[i]<<endl;
		}
	}
	return 0;
}
