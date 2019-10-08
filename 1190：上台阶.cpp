#include<bits/stdc++.h>
#define ll long long
using namespace std;
void HK(ll n){
	ll a=1,b=2,c=4,d;
	if(n==1){
		cout<<a<<endl;
		return;
	}
	if(n==2){
		cout<<b<<endl;
		return;
	}
	if(n==3){
		cout<<c<<endl;
		return;
	}
	for(int i=3;i<n;i++){
		d=a+b+c;
		a=b;
		b=c;
		c=d;
	}
	cout<<d<<endl;
	return;
}
int main(){
	ll k,i;
	for(i=1;;++i){
		cin>>k;
		if(k!=0){
			HK(k);
		}
		else{
			break;
		}
	}
	return 0;
}
