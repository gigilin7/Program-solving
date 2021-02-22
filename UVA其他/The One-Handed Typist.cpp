//3顆星 
//F代表有多少根手指頭 "受傷" 不能使用，N代表單字的數目
//求可以打出的最長單字有幾個(sum)? 是哪些單字(ans)? (重複的單字印一次就好)
//輸入:3 4 
//     7 8 9 
//     waxers
//     wax
//     waxers
//     wearer
//輸出:2
//     waxers
//     wearer
#include <iostream>
#include <string>
using namespace std;
int main()
{					//以下是題目要求每個手指能按哪些鍵 
	string finger[10]={"qaz","wsx","edc","rfvtgb"," "," ","yhnujm","ik,","ol.","p;/"};
	int f,F,N,k;
	string word,ans[100],temp; 
	while(cin>>F>>N)
	{
		string x={0};//不能按的字(所有因手指受傷不能按的鍵) 
		int a=0,sum=0;
		ans[0].clear();
		for(int i=0;i<F;i++)
		{
			cin>>f;//哪個手指受傷 
			x=x+finger[f-1];
		}
		for(int i=0;i<N;i++)
		{
			int flag=1;//flag=1代表單字能打，flag=0代表不能 
			cin>>word;
			for(int j=0;j<word.length();j++)
			{
				for(k=0;k<x.length();k++)
				{
					if(word[j]==x[k])
					{
						flag=0;
						break;
					} 
				}
				if(flag==0)
				{	
					break;
				} 
			}
			if(flag==1&&word!=ans[a])//不能有重複的單字 
			{	
				if(word.length()>ans[a].length())
				{//若有較長的單字，放ans的第一個位置，且sum變一個 
					a=0;
					sum=1;
					ans[a]=word;
				}
				else if(word.length()==ans[a].length())	
				{//若單字長度一樣，往後放 
					sum++;
					ans[++a]=word;
				}
			}
		} 
		cout<<sum<<endl;
		for(int i=0;i<sum;i++)
		{
			cout<<ans[i]<<endl;
		}
	}
}
