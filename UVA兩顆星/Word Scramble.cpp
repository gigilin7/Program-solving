//I love you. -> I evol .uoy 
//�`�N:�n��getchar()Ū������æL�X 
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
