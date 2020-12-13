#include<bits/stdc++.h>
using namespace std;
int n,id[310],ch[310],math[310],en[310],t[310];
void ssort(){
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(t[i]<t[j]){
				swap(t[i],t[j]);
				swap(ch[i],ch[j]);
				swap(math[i],math[j]);
				swap(en[i],en[j]);
				swap(id[i],id[j]);
			}
			else if(t[i]==t[j]){
				if(ch[i]<ch[j]){
					swap(t[i],t[j]);
					swap(ch[i],ch[j]);
					swap(math[i],math[j]);
					swap(en[i],en[j]);
					swap(id[i],id[j]);
				}
				if(ch[i]==ch[j]){
					if(id[i]>id[j]){
						swap(t[i],t[j]);
						swap(ch[i],ch[j]);
						swap(math[i],math[j]);
						swap(en[i],en[j]);
						swap(id[i],id[j]);
					}
				}
			}
			//cout<<ch[i]<<" "<<math[i]<<" "<<en[i]<<" "<<id[i]<<endl;
		}
	}
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>ch[i]>>math[i]>>en[i];
		t[i]=ch[i]+math[i]+en[i];
		id[i]=i;
	}
	//cout<<endl;
	ssort();
	//cout<<endl;
	for(int i=1;i<=5;i++){
		cout<<id[i]<<" "<<t[i]<<endl;
	}
	return 0;
}
