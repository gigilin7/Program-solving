//3���P 
//F�N���h�֮ڤ���Y "����" ����ϥΡAN�N���r���ƥ�
//�D�i�H���X���̪���r���X��(sum)? �O���ǳ�r(ans)? (���ƪ���r�L�@���N�n)
//��J:3 4 
//     7 8 9 
//     waxers
//     wax
//     waxers
//     wearer
//��X:2
//     waxers
//     wearer
#include <iostream>
#include <string>
using namespace std;
int main()
{					//�H�U�O�D�حn�D�C�Ӥ����������� 
	string finger[10]={"qaz","wsx","edc","rfvtgb"," "," ","yhnujm","ik,","ol.","p;/"};
	int f,F,N,k;
	string word,ans[100],temp; 
	while(cin>>F>>N)
	{
		string x={0};//��������r(�Ҧ��]������ˤ��������) 
		int a=0,sum=0;
		ans[0].clear();
		for(int i=0;i<F;i++)
		{
			cin>>f;//���Ӥ������ 
			x=x+finger[f-1];
		}
		for(int i=0;i<N;i++)
		{
			int flag=1;//flag=1�N���r�ॴ�Aflag=0�N���� 
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
			if(flag==1&&word!=ans[a])//���঳���ƪ���r 
			{	
				if(word.length()>ans[a].length())
				{//�Y����������r�A��ans���Ĥ@�Ӧ�m�A�Bsum�ܤ@�� 
					a=0;
					sum=1;
					ans[a]=word;
				}
				else if(word.length()==ans[a].length())	
				{//�Y��r���פ@�ˡA����� 
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
