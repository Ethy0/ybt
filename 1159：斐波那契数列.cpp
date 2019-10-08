#include<bits/stdc++.h>
using namespace std;
int fu(int x){
	if(x==1)
		return 0;
	else
		return x==2?1:fu(x-2)+fu(x-1);
}
int main(){
	int n;
	cin>>n;
	cout<<fu(n);
	return 0;
}
