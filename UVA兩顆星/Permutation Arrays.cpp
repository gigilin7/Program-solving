//�Ĥ@��:�X�����
//�ĤG��:�C�ӼƦr���s��
//�ĤT��:�C�ӼƦr
//�L�X�s���Ѥp��j���Ʀr
//�`�N:(1)char�}�C�n��strcpy(�����=)�A(2)����榡 
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
