//在兩輸入數字的範圍內，找出一數字在經過特殊運算後，有最多次的運算次數 
#include <stdio.h>
int main(void)
{
	int i,j,o,cl=0,temp=1,o2,i2,j2,k,big,small;
	 //cl是cycle length, temp是代替cl跑, o2是數範圍內的數字, o是讓數字判斷 
	for(k = 0;k<1000;k++) //故意設大範圍輸入次數 
	{
		scanf("%d",&i);
		scanf("%d",&j);
		if(i == i2 && j == j2) //因為如果輸入的次數不到1000次，程式會自己重複執行最後一次的輸入 
			break;             //所以如果程式開始自己重複輸入就代表我沒有再輸入值，就結束程式 
		if(i>=j)//判斷輸入的兩個數字誰大誰小 
		{
			big=i;
			small=j;
		}
		else
		{
			big=j;
			small=i;
		}
		for(o2=small;o2<=big;o2++)
		{
			o=o2;
			while(o!=1)//題目給的運算方式 
			{
				if(o%2==1)
					o=3*o+1;
				else
					o=o/2;
				temp++;
			}
			if(cl>=temp)
				cl=cl;
			else
				cl=temp;
			temp=1;	//因為o等於1也要算一次 
		}
		printf("%d %d %d\n",i,j,cl);
		cl = 0; //計算完第一組的cl後要歸0 
		i2 = i;
		j2 = j;
	}
	
	return 0;
}
	
