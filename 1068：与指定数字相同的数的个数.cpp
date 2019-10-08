#include<bits/stdc++.h>
using namespace std;
int n,m,t;
int a;
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a;
		if(a==m)
			t++;
	}
	cout<<t<<endl;
	return 0;
}
