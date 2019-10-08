#include<bits/stdc++.h>
#define lli long long int
using namespace std;
lli n;
bool judge(int x){
	for(int k=2;k<=sqrt(x);k++){
			if(x%k==0)
				return false;
	}
	return true;
}
int main(){
	cin>>n;
	int ban=sqrt(n);
	/*
	for(lli i=n;i>=ban;i--){
		if(judge(i)){
			for(lli j=2;j<=ban;j++){
				if(judge(j)){
					if(i*j==n){
						cout<<i<<endl;
						return 0;
					}
				}
			}
		}
	}
	³¬Ê± 
	*/
	for(int i=2;i<=ban;i++){
		if(n%i==0&&judge(i)){
			cout<<n/i;
			break;
		}
	}
	return 0;
}
