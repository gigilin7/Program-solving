//這個是輸入兩筆資料後要換行(按Enter)才能繼續輸入下兩筆資料 (與題目輸入格式不符) 
//找出兩數字相加有幾次進位，當輸入0 0就結束  
#include <stdio.h>
#include <string.h>
int main(void)
{
	int carry=0,total[100]={0},temp=0,i=0,j=0,k=0,l=0;
	char c[100]="No carry operation.",c2[100]="1 carry operation.",c3[100]=" carry operations.";
	char number[3][11]={0},num[11];
	for(l=0;;l++)
	{
		gets(num);
		if(num[0]=='0')//輸入0結束程式 
			break;
		strrev(num);//將輸入的數字倒過來存 
		for(i=0;i<3;i++)//將number裡的值初始化 
		{
			for(j=0;j<11;j++)
			{
				number[i][j]=0;
			}
		}
		for(i=0,j=0,k=0;i<strlen(num);i++,k++)//將num的值存到number裡 
		{
			number[j][k]=num[i];//number[0][]是存空白鍵前的數字，number[1][]是存空白鍵後的數字
			if(num[i]==' ')//如果輸入空白鍵，代表下次num的值要存到number[1][]裡 
			{
				j++;
				k=-1;//因為k會先++，所以要等於-1才能讓k=0去執行 
			}
		} 
		temp++;//數有幾次數字相加 
		for(i=0,carry=0;i<11;i++)
		{                                  //相加若大於9會進位，因用字元存，所以要用Ascii code比較 
			if(number[0][i]+number[1][i]>105||number[0][i]==58)//51是3的Ascii code，54是6的Ascii code 
			{                                                 //所以105是3+6的Ascii code，58是10的Ascii code 
				carry++;//算有幾次進位                       
				number[0][i+1]++;//若有進位，下個位數的數字+1 
			}
		}
		total[l]=carry;//total存每組相加完有進位幾次的值 
		carry=0;//每組計算完進位幾次後要歸0，才能繼續計算下一組輸入 
	}
	for(i=0;i<temp;i++)//輸出結果 
	{
		if(total[i]==0)
			printf("%s\n",c);
		else if(total[i]==1)
			printf("%s\n",c2);
		else
			printf("%d%s\n",total[i],c3);
	}
	return 0;
} 
