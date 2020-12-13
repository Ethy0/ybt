#include<bits/stdc++.h>
using namespace std;
int n;
bool a=false;
int main(){
	cin>>n;
	if(n%3==0){
		cout<<"3"<<" ";
		a=true;
	}
	if(n%5==0){
		cout<<"5"<<" ";
		a=true;
	}
	if(n%7==0){
		cout<<"7"<<endl;
		a=true;
	}
	if(a==false)
		cout<<"n"<<endl;
	return 0;
}
