#include<bits/stdc++.h>
using namespace std;
int n,num[101];
int ge[101],shi[101],bai[101],qian[101];
int t;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>num[i];
		ge[i]=num[i]%10;
		shi[i]=num[i]/10%10;
		bai[i]=num[i]/100%10;
		qian[i]=num[i]/1000;
	}
	for(int j=1;j<=n;j++){
		if(ge[j]-qian[j]-bai[j]-shi[j]>0){
			t++;
		}
	}
	cout<<t<<endl;
	return 0;
}
