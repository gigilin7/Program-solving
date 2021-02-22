#include <iostream>
#include <cctype>
#include <stack>
using namespace std;

struct Card
{
	char rank;//�I�� 
	char suit;//��� 
};

int charTOint(char rank)
{
	if(isdigit(rank)) return rank-'0'-1;
	if(rank=='A') return 0;
	if(rank=='T') return 9;
  	if(rank=='J') return 10;
  	if(rank=='Q') return 11;
  	if(rank=='K') return 12; 
}

int main()
{
	stack<Card> pile[13];
	Card card[52],pick;
	string temp;
	while(cin>>temp)
	{
		if(temp[0]=='#')
			break;
		card[0].rank=temp[0];
		card[0].suit=temp[1];
		for(int i=1;i<52;i++)
		{
			cin>>temp;
			card[i].rank=temp[0];
			card[i].suit=temp[1];
		}
		//�o�P(�Ĥ@�i�P��̤U���A�H������)
		for(int i=51,j=0;i>=0;i--,j++)
		{
			pile[j%13].push(card[i]);//pile[0]�O�̤W�� 
		}
		int count=0,pos=12;//12�O���bk����m 
		while(!pile[pos].empty())
		{
			pick=pile[pos].top();//½�}���P 
			pile[pos].pop();//�q���襤���� 
			pos=charTOint(pick.rank);
			count++;
		} 
		printf("%02d,%c%c\n",count,pick.rank,pick.suit); 
	}	//�`�Ncount�n��X���� 
}
