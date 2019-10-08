#include<bits/stdc++.h>
#define ll long long
using namespace std;
stack<ll> s;
char s1[5000];
ll a,b,emp=0;
int main(){
	gets(s1);
	ll i=0;
	while(s1[i]!='@'){
		if(s1[i]==' '){
			++i;
			continue;
		}
		if(s1[i]=='+'){
			a=s.top();
			s.pop();
			b=s.top();
			s.pop();
			s.push(a+b);
			++i;
			continue;
		}
		if(s1[i]=='-'){
			a=s.top();
			s.pop();
			b=s.top();
			s.pop();
			s.push(b-a);
			++i;
			continue;
		}
		if(s1[i]=='*'){
			a=s.top();
			s.pop();
			b=s.top();
			s.pop();
			s.push(a*b);
			++i;
			continue;
		}
		if(s1[i]=='/'){
			a=s.top();
			s.pop();
			b=s.top();
			s.pop();
			s.push(b/a);
			++i;
			continue;
		}
		while(s1[i]!=' '){
			emp=emp*10+s1[i]-'0';
			i++;
		}
		s.push(emp);
		emp=0;
	}
	cout<<s.top();
	return 0;
}
