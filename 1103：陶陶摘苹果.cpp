#include<bits/stdc++.h>
using namespace std;
const int inf=51;
int a[inf]={0},goal=0,total=0;
bool judge(int x,int y){
	if(x<=y)
		return true;
	return false;
}
int main(){
	for(int i=1;i<=10;i++)
		cin>>a[i];
	cin>>goal;
	for(int i=1;i<=10;i++){
		if(judge(a[i]-30,goal)){
			total+=1;
		}
	}
	cout<<total<<endl;
	return 0;
}
