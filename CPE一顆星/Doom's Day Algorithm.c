//�����������X�O�P���X 
//�b2011�~(�D�|�~non-leap)�C�X�����O�P���@:
//1/10, 2/21 4/4, 5/9, 6/6, 7/11, 8/8, 9/5, 10/10, 11/7, 12/12
//�|�~:�O4�����ơA���O100������ 
#include <stdio.h>
#include <string.h>
int main(void)
{
	int n,M,D,temp;
	char day[8][10]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	scanf("%d",&n);//���X��
	while(n--)
	{
		scanf("%d%d",&M,&D);//����A��� 
		if(M==1)
		{
			temp=(D-10)%7;
			if(temp<0)
				temp=temp+7;
			printf("%s\n",day[temp]);
		}
		else if(M==2)
		{
			temp=(D-21)%7;
			if(temp<0)
				temp=temp+7;
			printf("%s\n",day[temp]);
		}
		else if(M==4)
		{
			temp=(D-4)%7;
			if(temp<0)
				temp=temp+7;
			printf("%s\n",day[temp]);
		}
		else if(M==5)
		{
			temp=(D-9)%7;
			if(temp<0)
				temp=temp+7;
			printf("%s\n",day[temp]);
		}
		else if(M==6)
		{
			temp=(D-6)%7;
			if(temp<0)
				temp=temp+7;
			printf("%s\n",day[temp]);
		}
		else if(M==7)
		{
			temp=(D-11)%7;
			if(temp<0)
				temp=temp+7;
			printf("%s\n",day[temp]);
		}
		else if(M==8)
		{
			temp=(D-8)%7;
			if(temp<0)
				temp=temp+7;
			printf("%s\n",day[temp]);
		}
		else if(M==9)
		{
			temp=(D-5)%7;
			if(temp<0)
				temp=temp+7;
			printf("%s\n",day[temp]);
		}
		else if(M==10)
		{
			temp=(D-10)%7;
			if(temp<0)
				temp=temp+7;
			printf("%s\n",day[temp]);
		}
		else if(M==11)
		{
			temp=(D-7)%7;
			if(temp<0)
				temp=temp+7;
			printf("%s\n",day[temp]);
		}
		else if(M==12)
		{
			temp=(D-12)%7;
			if(temp<0)
				temp=temp+7;
			printf("%s\n",day[temp]);
		}
	}
	return 0;
}
