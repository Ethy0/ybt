#include<bits/stdc++.h>
using namespace std;
bool judge(int x){
	int sum=0;
	for(int i=1;i<x;i++){
		if(x%i==0){
			sum+=i;
		}
	}
	//cout<<sum<<" ";
	if(sum==x)
		return true;
	else
		return false;
}
int n;
int main(){
	cin>>n;
	for(int a=2;a<=n;a++){
		if(judge(a)){
			cout<<a<<endl;
		}
	}
	return 0;
}
