#include<bits/stdc++.h>
using namespace std;
int m,n;
int t;
int main(){
	cin>>m>>n;
	if(m%2==0){
		m=m+1;
	}
	for(int i=m;i<=n;i+=2){
		t=t+i;
	}
	cout<<t<<endl;
	return 0;
}
