//块ゑ n 程Smith Number
//Smith Number:ぃ琌借计 & ┮Τ计羆㎝单ㄤ┮Τ计计羆㎝ 
//ㄒ:4937775=3*5*5*658374+9+3+7+7+7+5=423+5+5+6+5+8+3+7=42
//癘眔ノsqrt计穦禲び  
//sqrt(疊翴计)璶ノ(double)盢 n 锣 
#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int n)
{
	if(n<2)
		return false;
	for(int i=2;i<=sqrt((double)n);i++)
	{
		if(n%i==0)
			return false;
	}
	return true;
}

int digit_sum(int n)//–计羆㎝ 
{
	int sum=0;
	while(n!=0)
	{
		sum=sum+n%10;
		n=n/10;
	}
	return sum;
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int m,n,temp;
	scanf("%d",&m);
	while(m--)
	{
		scanf("%d",&n);
		for(int i=n;;i++)
		{
			int sum=0;//┮Τ计计羆㎝
			temp=i;
			if(!is_prime(i))
			{
				for(int j=2;j<=sqrt((double)temp);j++)//计だ秆 
				{
					while(temp%j==0)
					{
						sum=sum+j;
						temp=temp/j;
					}
				} 
				if(temp!=1)//癘眔璶 
					sum=sum+digit_sum(temp);
				if(sum==digit_sum(i))
				{
					printf("%d\n",i);
					break;
				}
			}
		}
	}
} 
