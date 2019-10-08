#include<bits/stdc++.h>
using namespace std;
struct srt{
	int len;
	char m[100010];
	int t[100010];
}s1;
int k=0;
int main(){
	gets(s1.m);
	s1.len=strlen(s1.m);
	for(int i=0;i<s1.len;i++){
		for(int j=i+1;j<s1.len;j++){
			if(s1.m[i]==s1.m[j]){
				s1.t[i]+=1;
				s1.t[j]+=1;
			}
		}
	}
	while(k<s1.len){
		if(s1.t[k]!=0){
			k++;
			continue;
		}
		if(s1.t[k]==0){
			cout<<s1.m[k]<<endl;
			return 0;
		}
	}
	cout<<"no"<<endl;
	return 0;
}
