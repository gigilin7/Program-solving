//計算在一首歌曲中每個按鈕按了幾次(按鈕共有10個) 
//目前的按法跟上一個按法做比較，當是0→1時就紀錄按一次 
#include <stdio.h>
#include <string.h>
int main(void)
{   //每個音符的按法(1是按，0是不按) 
	char c[11]="0111001111",d[11]="0111001110",
		 e[11]="0111001100",f[11]="0111001000",
		 g[11]="0111000000",a[11]="0110000000",
		 b[11]="0100000000",C[11]="0010000000",
		 D[11]="1111001110",E[11]="1111001100",
		 F[11]="1111001000",G[11]="1111000000",
		 A[11]="1110000000",B[11]="1100000000";
	int n,sum[11]={0},i,j,k,t=0;
	char song[200],note1[11],note2[11],no1[11]="0000000000",no2[11];
	scanf("%d",&n);//有幾首歌曲 
	for(i=0;i<n;i++)
	{
		int sum[11]={0};
		scanf("%s",song);
		t=0;//為了要計算從無到有第一個音符之間，哪些按鈕有被按下，所做的設定 
		for(k=0;k<strlen(song);k++)
		{
			
			if(song[k]!=song[k+1])//目前的按法跟下一個按法做比較(若相同就不須比較) 
			{
				if(song[k]=='c')//如果此音符是c，則note1等於c的按法 
					strcpy(note1,c); 
				else if(song[k]=='d')
					strcpy(note1,d);
				else if(song[k]=='e')
					strcpy(note1,e);
				else if(song[k]=='f')
					strcpy(note1,f);
				else if(song[k]=='g')
					strcpy(note1,g);
				else if(song[k]=='a')
					strcpy(note1,a);
				else if(song[k]=='b')
					strcpy(note1,b);
				else if(song[k]=='C')
					strcpy(note1,C);
				else if(song[k]=='D')
					strcpy(note1,D);
				else if(song[k]=='E')
					strcpy(note1,E);
				else if(song[k]=='F')
					strcpy(note1,F);
				else if(song[k]=='G')
					strcpy(note1,G);
				else if(song[k]=='A')
					strcpy(note1,A);
				else if(song[k]=='B')
					strcpy(note1,B);
				
				
				if(song[k+1]=='c')//如果下個音符是c，則note2等於c的按法 
					strcpy(note2,c);
				else if(song[k+1]=='d')
					strcpy(note2,d);
				else if(song[k+1]=='e')
					strcpy(note2,e);
				else if(song[k+1]=='f')
					strcpy(note2,f);
				else if(song[k+1]=='g')
					strcpy(note2,g);
				else if(song[k+1]=='a')
					strcpy(note2,a);
				else if(song[k+1]=='b')
					strcpy(note2,b);
				else if(song[k+1]=='C')
					strcpy(note2,C);
				else if(song[k+1]=='D')
					strcpy(note2,D);
				else if(song[k+1]=='E')
					strcpy(note2,E);
				else if(song[k+1]=='F')
					strcpy(note2,F);
				else if(song[k+1]=='G')
					strcpy(note2,G);
				else if(song[k+1]=='A')
					strcpy(note2,A);
				else if(song[k+1]=='B')
					strcpy(note2,B);
					
				for(j=0;j<10;j++)//0 →1時就紀錄按一次(sum++) 
				{
					if(t==0)
					{
						strcpy(no2,note1);
						//no1是還沒開始按的按法，no2是目前音的按法 
						if(no1[j]=='0'&&no2[j]=='1')
							sum[j]++;
						//note1是目前音的按法，note2是下個音的按法	
						if(note1[j]=='0'&&note2[j]=='1') 
							sum[j]++;
					}
					else
					{
						if(note1[j]=='0'&&note2[j]=='1')
							sum[j]++;
					}
					
				}
				t=1;//開始有第一個音符後就不再是等於0 
			}
		}
	
		for(j=0;j<10;j++)//印出結果 
		{
			if(j==0)
				printf("%d",sum[j]);
			else
				printf(" %d",sum[j]);
		}
		printf("\n");
	} 
	return 0;
}
