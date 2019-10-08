#include<bits/stdc++.h>
using namespace std;
int num,decimal;
char en[30]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
void work(int x,int m){
	if(x/m!=0){
		work(x/m,m);
	}
	if(x%m<10){
		cout<<x%m;
	}
	else if(x%m>=10){
		cout<<en[x%m];
	}
}
int main(){
	cin>>num>>decimal;
	work(num,decimal);
	return 0;
}
