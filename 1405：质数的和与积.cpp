#include<bits/stdc++.h>
using namespace std;
int s,p;
bool judge(int x){
	for(int j=2;j<=sqrt(x);j++){
		if(x%j==0)
			return false;
	}
	return true;
}
int main(){
	cin>>s;
	for(int i=s/2;i<=s;i++){
		if(judge(s-i)&&judge(i)){
			p=(s-i)*i;
			cout<<p<<endl;
			return 0;
		}
	}
	return 0;
}
