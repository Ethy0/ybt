#include<bits/stdc++.h>
using namespace std;
int n,m,emp=1,t=0;
int a[5010];
bool flag[5010]={false};
int main(){
	cin>>n>>m;
	for(int i=2;i<=m;i++){
		for(int j=i;j<=n;j=i*emp){
			if(flag[j])
				flag[j]=false;
			else
				flag[j]=true;
			emp++;
			//cout<<"µ±Ç°µÆ×´Ì¬"<<j<<":"<<flag[j]<<endl;		
		}
		emp=1;
	}
	for(int i=1;i<=n;i++){
		
		if(flag[i]==false){
			a[t]=i;
			t++;
		}
	}
	for(int i=0;i<t-1;i++)
		cout<<a[i]<<",";
	cout<<a[t-1]<<endl;
	return 0;
}
