#include <iostream>
#include <cctype>
#include <cmath>
#include <string>
using namespace std;

bool prime(int a)
{
	for(int i=2;i<=sqrt(a);i++)
	{
		if(a%i==0)
			return false;
	}
	return true;
}

int main()
{
	string s;
	while(cin>>s)
	{
		int sum=0;
		for(int i=0;i<s.length();i++)
		{
			if(isupper(s[i]))
				sum=sum+s[i]-'A'+27;
			else
				sum=sum+s[i]-'a'+1;
		}
		if(prime(sum))
			cout<<"It is a prime word.\n";
		else
			cout<<"It is not a prime word.\n";
	}
} 
