//�ഫ��������M��k(Haab->Tzolkin) 
//Haab��19�Ӥ�e18�Ӥ�A�C�Ӥ�20�ѡA�̫�@��5��(���κ�) 
//Tzolkin�����Ѥz�a���k�A13�ӼƦr(�Ѥz)�M20�ӦW��(�a��)�W�ߴ`��260�Ѥ@�g��
//Haab:�`�Ѽ�=�~*365 + ��*20 + �� 
//Tzolkin:�Ʀr=�`�Ѽ�%13+1�A�W��=�`�Ѽ�%20�A�~=�`�Ѽ�/260
#include <stdio.h>
#include <string.h> 
int main()
{
	char Haab[19][19]={"pop","no","zip","zotz","tzec","xul","yoxkin",
	"mol","chen","yax","zac", "ceh", "mac", "kankin","muan",
	"pax","koyab","cumhu","uayet"};
	char Tzolkin[20][20]={"imix","ik","akbal","kan","chicchan","cimi",
	"manik","lamat","muluk","ok","chuen","eb","ben","ix","mem",
	"cib","caban","eznab","canac","ahau"};
	int n,d,y,sum,i;
	char m[10];
	scanf("%d",&n);
	printf("%d\n",n);
	while(n--)
	{
		scanf("%d.%s%d",&d,m,&y);
		for(i=0;i<19;i++)
		{
			if(strcmp(Haab[i],m)==0)
			{
				sum=y*365+i*20+d;
				break;
			}
		}
		printf("%d %s %d\n",sum%13+1,Tzolkin[sum%20],sum/260);
	}
} 
