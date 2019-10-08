#include<bits/stdc++.h>
#define lli long long int
using namespace std;
lli a,b,s=1;
int main(){
	cin>>a>>b;
	for(lli i=1;i<=b;i++){
		s*=a;
		s%=1000;
	}
	if((s/10)==0){
		cout<<"00"<<s<<endl;
		return 0;
	}
	if((s/100)==0){
		cout<<"0"<<s<<endl;
		return 0;
	}
	cout<<s<<endl;
	return 0;
}
