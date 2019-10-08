#include<bits/stdc++.h>
using namespace std;
double k,s=1;
long int n=2;
int main(){
	cin>>k;
	while(s<=k){
		s=s+(1.0/n);
		n++;
		//cout<<s<<" "<<n<<endl;
	}
	cout<<n-1;
	return 0;
}
