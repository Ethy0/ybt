#include<bits/stdc++.h>
using namespace std;
int n,num=1,tmp=1;
bool judge(int x){
	for(int i=2;i<=sqrt(x);i++){
			if(x%i==0)
				return false;
	}
	return true;
}
int main(){
	cin>>n;
	if(n==1){
		cout<<"2"<<endl;
		return 0;
	}
	while(tmp!=n){
		num+=2;
		if(judge(num)){
			tmp++;
		}
	}
	cout<<num<<endl;
	return 0;
}
