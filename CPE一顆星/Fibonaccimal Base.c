//�Y�ഫ�᪺�Ʀr�j���ɭԥ� 
//�N�Ʀr�ഫ���O��ƦC�i����
//�|��:17= 1 0 0 1 0 1 
//13+3+1= 13 8 5 3 2 1
#include <stdio.h>
#include <string.h>
int main(void)
{
	int n,num,number,i,j,temp;
	scanf("%d",&n);//���X�� 
	while(n--)
	{
		scanf("%d",&num);//��J�Ʀr 
		number=num;//����num���Ȧs�_�ӡA�]�U��num���ȷ|���� 
		int f[100]={0},count=2,a=1,b=2;
		//1��2���O��ƦC���˦n  
		f[0]=1;
		f[1]=2;
		for(i=2;num>=3;i++)//�ˤ@�ӶO��ƦC���}�C(���̤j�Ȥ��W�Lnum) 
		{
			if(num==1||num==2)//num����1��2�ɡA���ݭn��A�U���|�����L���� 
				break;
			f[i]=a+b;
			a=b;
			b=f[i];
			if(num<f[i])
				break;
			count++;//�p��O��}�C�ˤF�X�ӭ� 
			
		}
		char ans[1000]={0}; 
		for(i=0,j=count-1;j>=0;i++,j--)//�ഫ���O��ƦC�i�� 
		{
			temp=num/f[j];
			if(temp==1)
				ans[i]='1';
			else
				ans[i]='0';
			if(num>=f[j])
				num=num-f[j];
		}
		if(number==1)
			printf("%d = 1 (fib)\n",number);
		else if(number==2)
			printf("%d = 10 (fib)\n",number);
		else
			printf("%d = %s (fib)\n",number,ans);
	}
	return 0;
}
