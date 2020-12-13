#include<bits/stdc++.h>
using namespace std;
struct str{
	int len;
	char a[111];
}s;
char b[111];
int main(){
	gets(s.a);
	s.len=strlen(s.a);
	for(int i=0;i<s.len;i++){
		if(s.a[i]>=97&&s.a[i]<=122){
			s.a[i]-=32;
			continue;
		}
	}
	puts(s.a);
	return 0;
}
