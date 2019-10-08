#include<bits/stdc++.h>
using namespace std;
int a=1,b=1,c=0,k;
int main(){
	cin>>k;
	if(k<=2){
		cout<<"1"<<endl;
		return 0;
	}
	for(int i=3;i<=k;i++){
		c=a+b;
		a=b;
		b=c;
		if(i==k){
			cout<<c<<endl;
			break;
		}
	}
	return 0;
}
