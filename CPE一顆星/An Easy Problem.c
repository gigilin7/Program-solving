//肈ヘ:т N(2~62) 秈计砆N-1倒俱埃ㄤいA~Zパ10~35ボa~zパ36~61ボ
//安砞:琘计 X Τ n 计–计羆㎝ k 计τ X  N 秈 N=k+1
//羭ㄒ:10秈ㄒ–计狦琌9计ê或碞砆9俱埃
//挡阶: 讽 N=k+1 –计羆㎝ k 计玥 X  N 秈砆 k 俱埃
#include <stdio.h>
#include <string.h>
int main(void)
{
	int i=0;
	char input[100]={0};
	while(gets(input))
	{
		int R=0;//肈種:パ0~61ボ
		int sum=0;
		int max=1;//–计い程ぃ恨琌0┪1氮常琌秈┮max钡单1 
		for(i=0;i<strlen(input);i++)//じASCII絏锣传Θ才肈種计 
		{
			if(input[i]>='0' && input[i]<='9')//0~9 
				R=input[i]-'0';
			else if(input[i]>='A' && input[i]<='Z')//10~35 
				R=input[i]-'A'+10;
			else if(input[i]>='a' && input[i]<='z')//36~61 
				R=input[i]-'a'+36;
				
			sum=sum+R;//–计羆㎝
			if(R>max)//т–计い程(穦﹍膀┏ぃウ)(ぇ璶ㄓ耞琌碭秈) 
				max=R;
		}
		for(i=max;i<=62;i++)//肈ヘ弧程62秈 
		{
			if(i==62)//狦琌62计(砆62俱埃)莱63秈(ぃ肈種) 
			{
				printf("such number is impossible!\n");
				break;
			}
			
			if(sum%i==0)
			{
				printf("%d\n",i+1);
				break;
			}
		}
		
		
	}
	return 0;
}
