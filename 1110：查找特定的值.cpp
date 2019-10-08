#include<bits/stdc++.h>
using namespace std;
int n=0,a[10010]={0},x=0,location=0;
void search(int x){
	for(int m=1;m<=n;m++){
		if(a[m]==x){
			location=m;
			return;
		}
	}
	return;
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	cin>>x;
	search(x);
	if(location!=0)
		cout<<location<<endl;
	else
		cout<<"-1"<<endl;
	return 0;
}
