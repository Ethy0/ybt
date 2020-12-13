#include<bits/stdc++.h>
using namespace std;
struct words{
	int len;
	char a[40];
}w;
void p(int len){
	for(int j=0;j<len;j++)
		cout<<w.a[j];
	return;
}
int main(){
	gets(w.a);
	w.len=strlen(w.a);
	if((w.a[w.len-1]=='r'&&w.a[w.len-2]=='e')||(w.a[w.len-1]=='y'&&w.a[w.len-2]=='l')){
		w.len-=2;
		p(w.len);
		return 0;
	}
	if(w.a[w.len-1]=='g'&&w.a[w.len-2]=='n'&&w.a[w.len-3]=='i'){
		w.len-=3;
		p(w.len);
		return 0;
	}
	puts(w.a);
	return 0;
}
