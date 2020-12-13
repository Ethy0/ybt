#include<bits/stdc++.h>
using namespace std;
int y;
int tmp,x;
int main(){
	cin>>y;
	x=y;
	if((x%4==0&&x%100!=0)||x%400==0){
		cout<<"Y"<<endl;
	}
	else{
		cout<<"N"<<endl;
	}
	return 0;
}
