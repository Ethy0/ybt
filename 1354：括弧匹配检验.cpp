#include<bits/stdc++.h>
using namespace std;
stack<char> s;
char a[500];
char x,y;
int main(){
	gets(a);
	int len=strlen(a);
	for(int i=0;i<len;i++){
		if(a[i]=='('||a[i]=='['){
			s.push(a[i]);
		}
		else if(a[i]==')'){
			if((!s.empty())&&(s.top()=='('))
				s.pop();
			else{
				cout<<"Wrong";
				return 0;
			}
		}
		else if(a[i]==']'){
			if(s.empty()||s.top()!='['){
				cout<<"Wrong";
				return 0;
			}
			else{
				if((!s.empty())&&(s.top()=='['))
					s.pop();
			}
		}
	}
	if(s.empty()){
		cout<<"OK";
	}
	else{
		cout<<"Wrong";
	}
	return 0;
}
