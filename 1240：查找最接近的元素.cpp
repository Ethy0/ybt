#include<bits/stdc++.h>
using namespace std;
int n,m;
long long num[100010],ask;
long long i;
void search(long long l,long long r,long long x){
	int mid=(l+r)/2;
	//cout<<"left="<<l<<"   right="<<r<<"  mid="<<mid<<endl;
	if(num[mid]==x){
		cout<<num[mid]<<endl;
		return;
	}

	if(l>=r-1){
		if(abs(x-num[l])>abs(x-num[r])){
			cout<<num[r]<<endl;
		}
		if(abs(x-num[l])<abs(x-num[r])){
			cout<<num[l]<<endl;
		}
		if(abs(x-num[l])==abs(x-num[r])){
			cout<<num[l]<<endl;
		}
		return;
	}
	else{
		if(num[mid]>x){
			search(l,mid,x);
		}
		if(num[mid]<x){
			search(mid,r,x);
		}
	}
	
	return;
}
int main(){
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>num[i];
	}
	cin>>m;
	for(i=1;i<=m;i++){
		cin>>ask;
		search(1,n,ask);
	}
	return 0;
}
