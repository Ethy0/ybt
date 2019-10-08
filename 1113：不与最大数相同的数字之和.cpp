#include<bits/stdc++.h>
#define lli long long int
using namespace std;
lli n,a[1000010]={0},biggest=0,total=0;
int search(lli x){
	for(lli i=1;i<=n;i++){
		if(a[i]>=biggest){
			biggest=a[i];
		}
	}
	for(lli i=1;i<=n;i++){
		if(a[i]==biggest)
			a[i]=0;
	}
	for(lli i=1;i<=n;i++){
		total+=a[i];
	}
	return total;
}
int main(){
	cin>>n;
	for(lli i=1;i<=n;i++)
		cin>>a[i];
	cout<<search(1)<<endl;
	return 0;
}
