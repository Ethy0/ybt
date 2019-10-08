#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool flag=true;
string m,n;
ll a[200000],b[200000],c[2000000];
int main(){
	cin>>m>>n;
	int len1=m.length();
	int len2=n.length();
	int len=len1+len2;
	int i,j;
	for(i=1;i<=len1;i++){
		a[i]=m[len1-i]-'0';
	}
	for(i=1;i<=len2;i++){
		b[i]=n[len2-i]-'0';
	}
	if((m<n&&len1==len2)||len1<len2){
		swap(a,b);
		flag=false;
	}
	for(i=1;i<len;i++){
		if(a[i]<b[i]){
			--a[i+1];
			a[i]+=10;
		}
		c[i]=a[i]-b[i];
	}
	while(c[len]==0&&len>=1){
		len--;
	}
	if(flag==false){
		cout<<"-";
	}
	if(len<1)
		cout<<"0";
	for(i=len;i>=1;i--){
		cout<<c[i];
	}
	return 0;
}
