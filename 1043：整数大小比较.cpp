#include<bits/stdc++.h>
using namespace std;
long long x,y;
int main(){
	cin>>x>>y;
	if(x>y)
		cout<<">"<<endl;
	if(x<y)
		cout<<"<"<<endl;
	if(x==y)
		cout<<"="<<endl;
	return 0;
}
