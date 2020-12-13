#include<bits/stdc++.h>
using namespace std;
bool judges(int y){
	for(int j=2;j<=sqrt(y);j++){
		if(y%j==0)
			return false;
	}
	return true;
}
bool judgeh(int x){
	int head;
	int tail;
	int mid;
	tail=x%10;
	mid=x/10%10;
	head=x/100%10;
	if(head==tail){
		if(judges(x)){
			return true;
		}
	}
	return false;
}

int i;
int main(){
	for(i=100;i<=999;i++){
		if(judgeh(i)){
			cout<<i<<endl;
		}
	}
	return 0;
}
