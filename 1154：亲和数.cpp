#include<bits/stdc++.h>
using namespace std;
int a,b;
bool judge(int x){
	int y=0,sum=0;
	for(int i=1;i<x;i++){
		if(x%i==0){
			y+=i;
		}
	}
	if(x==y)
		return false;
	for(int i=1;i<y;i++){
		if(y%i==0){
			sum+=i;
		}
	}
	if(sum==x){
		a=x;
		b=y;
		return true;
	}
	return false;
}
int main(){
	for(int k=1;;k++){
		if(judge(k)){
			cout<<a<<" "<<b<<endl;
			return 0;
		}
	}
	return 0;
}
