//3聋琍螟 
//块俱计N (计璶ノstring)
//衡S = 1^1 + 2^2 + 3^3 + ... + N^N块S程计(计) 
//秆肈筁祘璶σ納计籔计碞 
#include <iostream>
#include <string> 
using namespace std;
int main()
{				//0+1+4+7+6+5+6+3+6+6=47  //0+1+6+3+6+5+6+7+4+9=47 
	int table[2][10]={{0,1,4,7,6,5,6,3,6,9},{0,1,6,3,6,5,6,7,4,9}};//冈薄把σlast digit秆猭瓜 
	string n;			//案计              	//计 
	while(cin>>n)
	{
		int temp=0,sum=0;
		if(n=="0")
			break;
		if(n.length()>1)//块俱计Τㄢ计 
			temp=n[n.length()-2]-'0';//计(じ璶传Θ俱计) 
		else
			temp=0;//⊿Τ计┮琌0 
		sum=temp*7;//セ莱赣琌璶*47氮璶计┮*7碞
		for(int i=1;i<=n[n.length()-1]-'0';++i)//计 
		{
			sum=sum+table[temp%2][i];//眖1秨﹍琌sum+0临琌sum 
		}
		cout<<sum%10<<endl;//块计 
	}
}
