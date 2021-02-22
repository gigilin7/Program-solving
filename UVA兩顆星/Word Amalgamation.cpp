#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	map<string,string> dic;
	map<string,string>::iterator i;
	string key,word;
	while(cin>>key&&key!="XXXXXX")
	{
		word=key;
		sort(word.begin(),word.end());
		dic[key]=word;	
	}
	while(cin>>word&&word!="XXXXXX")
	{
		int flag=1;
		sort(word.begin(),word.end());
		for(i=dic.begin();i!=dic.end();i++)
		{
			if(word==i->second)
			{
				cout<<i->first<<'\n';
				flag=0;
			}
		}
		if(flag)
			cout<<"NOT A VALID WORD\n";
		cout<<"******\n";
	}
} 
