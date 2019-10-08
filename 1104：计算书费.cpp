#include<bits/stdc++.h>
using namespace std;
double money[11]={0,28.9,32.7,45.6,78,35,86.2,27.8,43,56,65},num[11]={0};
double total=0;
void calc(double x,double y){
	total+=x*y;
	return;
}
int main(){
	for(int i=1;i<=10;i++)
		cin>>num[i];
	for(int i=1;i<=10;i++){
		calc(money[i],num[i]);
		//cout<<money[i]<<"   "<<num[i]<<"   "<<total<<endl;
	}
	printf("%.1lf",total);
	return 0;
}
