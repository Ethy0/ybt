#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll num=32767;
ll n,k[1000000],a[1000000]={0,1,2};
int main(){
	cin>>n;
	for(ll i=1;i<=n;i++)
		cin>>k[i];
	for(ll i=3;i<=1000000;i++){
		a[i]=a[i-1]*2+a[i-2];
	}
	for(ll i=1;i<=n;i++){
		if(k[i]==1||k[i]==2){
			cout<<"1"<<endl;
			return 0;
		}
		ll tmp=k[i];
		cout<<a[tmp]%num<<endl;
	}
	return 0;
}
