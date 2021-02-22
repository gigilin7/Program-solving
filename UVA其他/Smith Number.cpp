//��X�� n �j���̤p��Smith Number
//Smith Number:���O��� & �Ҧ��Ʀr���`�M�����Ҧ��]�ƼƦr���`�M 
//��:4937775=3*5*5*65837�A4+9+3+7+7+7+5=42�A3+5+5+6+5+8+3+7=42
//�O�o��sqrt�A�]�Ʀr�j�|�]�Ӥ[  
//sqrt(�B�I��)�A�n��(double)�N n �૬ 
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

int digit_sum(int n)//�C��Ʀr�ۥ[�`�M 
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
			int sum=0;//�Ҧ��]�ƼƦr���`�M
			temp=i;
			if(!is_prime(i))
			{
				for(int j=2;j<=sqrt((double)temp);j++)//�]�Ƥ��� 
				{
					while(temp%j==0)
					{
						sum=sum+j;
						temp=temp/j;
					}
				} 
				if(temp!=1)//�O�o�n�[ 
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
