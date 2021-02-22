#include <iostream>
#include <cctype>
#include <stack>
using namespace std;

struct Card
{
	char rank;//點數 
	char suit;//花色 
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
		//發牌(第一張牌放最下面，以此類推)
		for(int i=51,j=0;i>=0;i--,j++)
		{
			pile[j%13].push(card[i]);//pile[0]是最上面 
		}
		int count=0,pos=12;//12是指在k的位置 
		while(!pile[pos].empty())
		{
			pick=pile[pos].top();//翻開的牌 
			pile[pos].pop();//從那堆中移除 
			pos=charTOint(pick.rank);
			count++;
		} 
		printf("%02d,%c%c\n",count,pick.rank,pick.suit); 
	}	//注意count要輸出兩位數 
}
