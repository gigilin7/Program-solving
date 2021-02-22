//轉換瑪雅的兩套曆法(Haab->Tzolkin) 
//Haab為19個月前18個月，每個月20天，最後一個5天(不用算) 
//Tzolkin類似天干地支算法，13個數字(天干)和20個名稱(地支)獨立循環260天一週期
//Haab:總天數=年*365 + 月*20 + 日 
//Tzolkin:數字=總天數%13+1，名稱=總天數%20，年=總天數/260
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
