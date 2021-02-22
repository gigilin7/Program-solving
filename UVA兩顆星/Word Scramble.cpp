//I love you. -> I evol .uoy 
//注意:要用getchar()讀取換行並印出 
#include <iostream>
#include <string>
using namespace std;
int main() 
{
	string s;
	while(cin>>s)
	{
		for(int i=s.length()-1;i>=0;i--)
		{
			cout<<s[i];
		}
		printf("%c",getchar());
	}
}
