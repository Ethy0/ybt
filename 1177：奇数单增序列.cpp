#include<bits/stdc++.h>
using namespace std;
int n,a,b[300];
int main(){
	cin>>n;
	int i,j=1;
	for(i=1;i<=n;i++){
		cin>>a;
		if(a%2!=0){
			b[j]=a;
			++j;
		}
	}
	int len=j;
	sort(b,b+len);
	for(i=1;i<len-1;i++){
		cout<<b[i]<<",";
	}
	cout<<b[i];
	return 0;
}
