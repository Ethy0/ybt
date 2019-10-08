#include<bits/stdc++.h>
using namespace std;
char a[500];
stack<char> s;
char x;
int main(){
	gets(a);
	int i=0;
	while(a[i]!='@'){
		if(a[i]=='('){
			s.push(a[i]);
		}
		if(a[i]==')'){
			if(!s.empty())
				s.pop();
			else{
				cout<<"NO";
				return 0;
			}
		}
		++i;
	}
	if(s.empty()){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}
