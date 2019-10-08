#include<bits/stdc++.h>
using namespace std;
bool judge(int x){
	for(int i=2;i<=sqrt(x);i++){
		if(x%i==0)
			return false;
	}
	return true;
}
int num,ge,shi;
int main(){
	for(int k=10;k<=99;k++){
		if(judge(k)){
			ge=k%10;
			shi=k/10;
			swap(ge,shi);
			num=shi*10+ge;
			if(judge(num)){
				cout<<k<<endl;
				continue;
			}
		}
	}
	return 0;
}
