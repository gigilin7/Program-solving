//��ɰw�P���w����������(���צb0~180) 
#include <iostream>
#include <cmath>
using namespace std;
int main()
{	
	float H,M,ans;
	while(scanf("%f:%f",&H,&M)) 
	{
		if(H==0&&M==0)
			break;
		if(H==12)
			H=H-12;
		H=H*5*6+M*0.5;//�ɰw�]�|�]�����w���ʦӲ��� 
		M=M*6;
		ans=abs(H-M);
		if(ans>180)
			ans=360-ans;
		printf("%.3f\n",ans);
	}
} 
