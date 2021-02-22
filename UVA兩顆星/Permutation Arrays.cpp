//第一行:幾筆資料
//第二行:每個數字的編號
//第三行:每個數字
//印出編號由小到大的數字
//注意:(1)char陣列要用strcpy(不能用=)，(2)換行格式 
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int n,number[10000]={0};
	char s[1000][1000]={0},temp[1][1000];
	cin>>n;
	while(n--)
	{
		int count=0;
		for(int i=0;;i++)
		{
			cin>>number[i];
			count++;
			if(getchar()=='\n')
				break;
		}
		for(int j=0;j<count;j++)
		{
			cin>>s[j];
		}
		for(int i=0;i<count;i++)
		{
			for(int j=0;j<count-1-i;j++)
			{
				if(number[j]>number[j+1])
				{
					int t=number[j];
					number[j]=number[j+1];
					number[j+1]=t;
					
					strcpy(temp[0],s[j]);
					strcpy(s[j],s[j+1]);
					strcpy(s[j+1],temp[0]);
				}
			}
		}
		for(int i=0;i<count;i++)
		{
			cout<<s[i]<<'\n';
		}
		if(n)
			cout<<'\n';
	}
} 
