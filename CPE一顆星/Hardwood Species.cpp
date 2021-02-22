//計算每組輸入的各種樹佔多少百分比 (一組有很多個輸入) 
//因為C沒有map所以用C++寫 
#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
	int n;
	string tree;
	cin>>n; //輸入有幾組 
	getline(cin,tree);//遇到換行就算下一個輸入 
	getline(cin,tree);//要有兩個getline(cin,tree)是因為此題有不只一組輸入 
	while(n--)
	{
		map<string,int> record; //map的必要宣告 
		map<string,int>::iterator i; //map的必要宣告 (iterator類似pointer的用法) 
		int sum=0; //算此組中共有幾棵樹 
		while(getline(cin,tree))
		{
			if(tree.compare("")==0)//判斷此組是否結束輸入，因每組輸入前都會有空白隔開(就是無輸入) 
				break;             //所以要比較如果沒輸入值，就代表此組輸入結束(空白後是下組) 
			record[tree]++;  //將每顆輸入的樹作紀錄(算每種樹有出現幾次) 
			sum++;
		}
		
		for(i=record.begin();i!=record.end();i++)//將紀錄裡的東西拿出來印 
		{ //也可用cout << i->first << " " << fixed << setprecision(4) << i->second*100.0/sum; 
			printf("%s %.4f\n",(*i).first.data(),(*i).second*100.0/sum);
		}          //first是此種樹的名稱，second是此種樹出現次數
		           //data()是要把string的值拿出來必須加的 
		
		if(n)//n是0就不執行 
			cout<<endl;
	}
	
}
