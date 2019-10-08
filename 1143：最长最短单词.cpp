#include<bits/stdc++.h>
using namespace std;
struct w{
	int len;
	char a[20000];
}s;
int len,max=0,min;
int main(){
	gets(s.a);
	s.len=strlen(s.a);
	a[s.len]=' ';
	for(int i=1;i<=s.len){
		if(s.a[i]!=' '&&s.a[i]!=','){
			len++;
		}
		else if(len>0){
			if(len>max){
				max=len;
			}
			if(len<min){
				min=len;
			}
			
		}
	}
}
