#include<bits/stdc++.h>
#define ll long long int
#define inf 1000010
using namespace std;
ll table[inf]={0},num[9999]={0},n;
void Make(ll k){
	ll a=1,b=1,c=0;
	table[1]=1;
	table[2]=1;
	for(ll i=3;i<=k;i++){
		c=(a+b)%1000;
		a=b;
		b=c;
		table[i]=c;
	}
	return;
}
int main(){
	cin>>n;
	ll temp;
	Make(inf);
	for(ll i=1;i<=n;i++){
		cin>>temp;
		cout<<table[temp]<<endl;
	}
	return 0;
}
