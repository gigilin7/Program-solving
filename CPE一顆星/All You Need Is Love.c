//找出兩二進位數字的最大公因數
//如果是1，印Love is not all you need!
//如果不是1，印All you need is love! 
#include <stdio.h>
#include <string.h>
#include <math.h>//pow(x,y)-> x的y次方 
int main(void)
{
	int i,j,count=1,n,len1,len2;
	char s1[30]={0},s2[30]={0};
	scanf("%d",&n);//有幾組輸入(一組有兩筆資料) 
	for(i=0;i<n;i++)
	{
		int S1=0,S2=0;
		char s1[30]={0};
		char s2[30]={0};
		scanf("%s",s1);//不用gets(s1)是因為gets(s1)會把換行也算進去 
		scanf("%s",s2);
		strrev(s1);//將一串輸入倒過來存(如1100變0011) 
		strrev(s2);
		len1=strlen(s1); 
		len2=strlen(s2);
		for(j=0;j<len1;j++)//第一筆資料 
		{
			if(s1[j]=='1')//將原本字元1的ASCII碼轉換成整數1 
				s1[j]=s1[j]-'1'+1;
			else
				s1[j]=s1[j]-'0';
			
			S1=S1+s1[j]*pow(2,j);//S1是二進位的s1轉換成十進位的值 
		}
		for(j=0;j<len2;j++)//第二筆資料 
		{
			if(s2[j]=='1')
				s2[j]=s2[j]-'1'+1;
			else
				s2[j]=s2[j]-'0';
			
			S2=S2+s2[j]*pow(2,j);
		}
		
		while(S2!=0)//gcd(找出最大公因數) 
		{
			int temp=S1%S2;
			S1=S2;
			S2=temp;
		}
		printf("Pair #%d: ",count++);
		if(S1==1)//S1現在是最大公因數 
			printf("Love is not all you need!\n");
		else
			printf("All you need is love!\n");
	}
	return 0;
}
