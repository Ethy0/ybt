#include<bits/stdc++.h>
using namespace std;
struct w{
	int len;
	char a[2000];
	int l[2000];
}s;
int j=0;
bool flag=true;
int main(){
	gets(s.a);
	s.len=strlen(s.a);
	for(int i=0;i<s.len;i++){
		if(s.a[i]!=' '){
			s.l[j]++;
			flag=true;
		}
		if(s.a[i]==' '&&flag){
			j++;
			flag=false;
		}
	}
	for(int i=0;i<j;i++){
		cout<<s.l[i]<<",";
	}
	cout<<s.l[j]<<endl;
	return 0;
}
