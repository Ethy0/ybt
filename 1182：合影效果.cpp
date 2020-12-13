#include<bits/stdc++.h>
using namespace std;
int n;
float hm[25],hw[25],h[50];
char gender;
bool cmp(float x,float y){
	return x>y;
}
int main(){
	cin>>n;
	int x=1,y=1;
	for(int i=1;i<=n;i++){
		cin>>gender;
		if(gender=='male'){
			cin>>hm[x];
			++x;
		}
		if(gender=='female'){
			cin>>hw[y];
			++y;
		}
	}
	int len1=x;
	int len2=y;
	sort(hm,hm+len1);
	sort(hw,hw+len2,cmp);
	for(int i=1;i<=len1;i++){
		h[i]=hm[i];
	}
	int j=1;
	for(int i=len1+1;i<=len2;i++){
		h[i]=hw[j];
		++j;
	}
	int i=1;
	for(i=1;i<n;i++){
		printf("%2.f ",h[i]);
	}
	printf("%2.f",h[i]);
	return 0;
}
