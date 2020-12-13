#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll num=32767;
ll n,k,a[1000000]={0,1,2};
ll pell(ll x,ll y){
	if(x==y)
		return a[x];
	else{
		a[x]=2*a[x-1]+a[x-2];
		pell(x+1,y);
	}
}
int main(){
	cin>>n;
	for(ll i=1;i<=n;i++){
		cin>>k;
		if(k==1){
			cout<<"1"<<endl;
			continue;
		}
		if(k==2){
			cout<<"1"<<endl;
			continue;
		}
		cout<<pell(3,k)<<endl<<endl;
		//cout<<pell(3,k)%num<<endl;
	}
	return 0;
}
