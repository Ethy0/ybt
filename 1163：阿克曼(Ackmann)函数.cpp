#include<bits/stdc++.h>
using namespace std;
int m,n;
int akm(int x,int y){
	if(x>3&&y>10)
		return 0;
	else if(x==0){
		return y+1;
	}
	else if(x>0&&y==0){
		return akm(x-1,1);
	}
	else if(x>0&&y>0){
		return akm(x-1,akm(x,y-1));
	}
}
int main(){
	cin>>m>>n;
	cout<<akm(m,n);
	return 0;
}
