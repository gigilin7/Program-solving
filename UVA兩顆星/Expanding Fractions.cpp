#include <iostream>
using namespace std;
int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		if(n==0&&m==0)
			break;
		cout<<".";
		int appear[1000]={0},count=1,flag=0;
		while(n!=0)
		{
			if(count%50==0)
				cout<<'\n';
			appear[n]=count;//紀錄餘數出現順序 
			count++;//出現順序 
			printf("%d",n*10/m);//商 
			n=n*10%m;//餘數 
			if(appear[n])//餘數開始重複 
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
			printf("\nThe last %d digits repeat forever.\n",count-appear[n]);
		else
			printf("\nThis expansion terminates.\n");
		cout<<'\n';
	}	
} 
//利用長除法的方式，邊乘10邊除，當餘數已經重複出現時，即開始循環了。
//記下餘數出現的順序，就可知道從哪開始循環了。
//p.s. 循環節的長度不會大於分母。

