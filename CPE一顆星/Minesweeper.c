//����񦳴X�Ӧa�p(*�O���a�p .�O�L�a�p) 
//��J:3 5       ��X:Field #1: 
//     **...          **100
//     .....          33200
//     .*...          1*100
#include <stdio.h>
int main(void)
{
	int i,j,h,w,count=1,k=0;
	for(k=0;;k++)
	{
		scanf("%d",&h);
		scanf("%d",&w);
		if(h==0&&w==0)
			break;
		else if((h!=0||w!=0)&&k!=0)
			printf("\n");
		
		char mine[100][100]={0};
		for(i=0;i<h;i++)
		{
			scanf("%s",mine[i]);
		}
		
		printf("Field #%d:\n",count++);
		for(i=0;i<h;i++)
		{
			for(j=0;j<w;j++)
			{
				int sum=0;//�⤤�ߪ��E�c�椺���X�Ӧa�p 
				
				if((i-1>=0 && j-1>=0) && mine[i-1][j-1]=='*')//���W 
					sum++;
				if(i-1>=0 && mine[i-1][j]=='*')//�� 
					sum++;
				if((i-1>=0 && j+1<w) && mine[i-1][j+1]=='*')//���U 
					sum++;
				if(j-1>=0 && mine[i][j-1]=='*')//���W 
					sum++;
				if(j+1<w && mine[i][j+1]=='*')//���U 
					sum++;
				if((i+1<h && j-1>=0) && mine[i+1][j-1]=='*')//�k�W 
					sum++;
				if(i+1<h && mine[i+1][j]=='*')//�k 
					sum++;
				if((i+1<h && j+1<w) && mine[i+1][j+1]=='*')//�k�U 
					sum++;
					
				if(mine[i][j]=='*')
					printf("*");
				else
					printf("%d",sum);
			}
			printf("\n");
		}
	}
	return 0;
}
