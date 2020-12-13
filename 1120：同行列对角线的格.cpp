#include<bits/stdc++.h>
using namespace std;
int n,a,b;
void f(int x,int y){//左至右
	for(int i=1;i<=n;i++){
		cout<<"("<<x<<","<<i<<") ";
	}
	cout<<endl;
}

void ff(int x,int y){//上至下
	for(int i=1;i<=n;i++){
		cout<<"("<<i<<","<<y<<") ";
	}
	cout<<endl;
}

void fff(int x,int y){//左上至右下
	while(x>1&&y>1){
		x-=1;
		y-=1;
	}
	//cout<<x<<" "<<y<<endl;
	while(x<=n&&y<=n){
		cout<<"("<<x<<","<<y<<") ";
		x+=1;
		y+=1;
	}
	cout<<endl;
}

void ffff(int x,int y){//左下至右上 
	while(x<n&&y>1){
		x+=1;
		y-=1;
	}
	//cout<<x<<" "<<y<<endl;
	while(x>=1&&y<=n){
		cout<<"("<<x<<","<<y<<") ";
		x-=1;
		y+=1;
	}
	cout<<endl;
}

int main(){
	cin>>n>>a>>b;
	f(a,b);
	ff(a,b);
	fff(a,b);
	ffff(a,b);
	return 0;
}
