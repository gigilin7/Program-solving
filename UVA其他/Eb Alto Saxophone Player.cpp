//c++ª©¥» 
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string c="0111001111",d="0111001110",
		   e="0111001100",f="0111001000",
		   g="0111000000",a="0110000000",
		   b="0100000000",C="0010000000",
		   D="1111001110",E="1111001100",
		   F="1111001000",G="1111000000",
		   A="1110000000",B="1100000000";
	int n;
	string song,s1,s2;
	cin>>n;
	while(n--)
	{
		int sum[11]={0},t=0;
		cin>>song;
		for(int i=0;i<song.length();i++)
		{
			if(song[i]!=song[i+1])
			{
				if(song[i]=='c')
					s1=c;
				else if(song[i]=='d')
					s1=d;
				else if(song[i]=='e')
					s1=e;
				else if(song[i]=='f')
					s1=f;
				else if(song[i]=='g')
					s1=g;
				else if(song[i]=='a')
					s1=a;
				else if(song[i]=='b')
					s1=b;
				else if(song[i]=='C')
					s1=C;
				else if(song[i]=='D')
					s1=D;
				else if(song[i]=='E')
					s1=E;
				else if(song[i]=='F')
					s1=F;
				else if(song[i]=='G')
					s1=G;
				else if(song[i]=='A')
					s1=A;
				else if(song[i]=='B')
					s1=B;
				
				
				if(song[i+1]=='c') 
					s2=c;
				else if(song[i+1]=='d')
					s2=d;
				else if(song[i+1]=='e')
					s2=e;
				else if(song[i+1]=='f')
					s2=f;
				else if(song[i+1]=='g')
					s2=g;
				else if(song[i+1]=='a')
					s2=a;
				else if(song[i+1]=='b')
					s2=b;
				else if(song[i+1]=='C')
					s2=C;
				else if(song[i+1]=='D')
					s2=D;
				else if(song[i+1]=='E')
					s2=E;
				else if(song[i+1]=='F')
					s2=F;
				else if(song[i+1]=='G')
					s2=G;
				else if(song[i+1]=='A')
					s2=A;
				else if(song[i+1]=='B')
					s2=B;
			
				for(int j=0;j<10;j++)
				{
					if(t==0)
					{
						string temp1="0000000000",temp2=s1;
						if(temp1[j]=='0'&&temp2[j]=='1')
							sum[j]++;
						if(s1[j]=='0'&&s2[j]=='1')
							sum[j]++;
					}
					else
					{
						if(s1[j]=='0'&&s2[j]=='1')
							sum[j]++;
					}
				}
				t=1;
			}
		}
		for(int i=0;i<10;i++)
		{
			if(i==0)
				printf("%d",sum[i]);
			else
				printf(" %d",sum[i]);
		}
		cout<<'\n';
	}
} 
