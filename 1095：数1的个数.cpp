#include<bits/stdc++.h>
#define lli long long int
using namespace std;
lli n,a[10001],t;
int flag;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++)
		a[i]=i;
	for(int i=1;i<=n;i++){
		while(a[i]!=0){
			t=a[i]%10;
			a[i]/=10;
			if(t==1)
				flag++;
		}
	}
	cout<<flag<<endl;
	return 0;
}
