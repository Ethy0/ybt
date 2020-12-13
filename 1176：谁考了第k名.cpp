#include<bits/stdc++.h>
using namespace std;
int n,k;
double grade[5010];
long long int id[5010];
void ssort(){
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(grade[i]<grade[j]){
				swap(grade[i],grade[j]);
				swap(id[i],id[j]);
			}
		}
	}
}
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>id[i]>>grade[i];
	}
	ssort();
	cout<<id[k]<<" "<<grade[k];
	return 0;
}
