#include<bits/stdc++.h>
using namespace std;
int b,c;
int prime[30]={0,2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
bool judge(int x){
	for(int i=2;i<=26;i++){
		for(int j=i;j<=26;j++){
			if(prime[i]+prime[j]==x){
				b=prime[i];
				c=prime[j];
				return true;
			}
		}
	}
	return false;
}
int main(){
	for(int a=6;a<=100;a+=2){
		if(judge(a)){
			cout<<a<<"="<<b<<"+"<<c<<endl;
		}
	}
	return 0;
}
