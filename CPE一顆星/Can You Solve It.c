//��X�_�I�y��(x1,y1)����I�y��(x2,y2)�������ʦh�ֶZ��(�X�B) 
#include <stdio.h>
int main(void)
{
	int i,n,x1,y1,x2,y2;
	int count=0;//�ƨ��F�X�B 
	scanf("%d",&n);//���X�ծy��(�@�զ���Ӯy��) 
	for(i=0;i<n;i++)
	{
		count=0;
		scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
		while(x1!=x2||y1!=y2) //x1==x2&&y1==y2���X�j�� 
		{
			//�qy�b�@�B�@�B����x�b(���W) 
			while(y1!=0) 
			{
				if(x1==x2&&y1==y2)
					break;
				x1++;
				y1--;
				count++;
			}
			if(x1==x2&&y1==y2)
				break;
			//�qx�b�Ƥ@�B��y�b(�k�U) 
			y1=x1+1;
			x1=0;
			count++;
		}
		printf("Case %d: %d\n",i+1,count);
	}
	return 0;
}
