#include<bits/stdc++.h>
using namespace std;
int tmp,len1;
struct str1{
	int len;
	char a[666];
}str1;
string s1;
int main(){
	gets(str1.a);
	str1.len=strlen(str1.a);
	for(int i=0;i<str1.len;i++){
		if(str1.a[i]>=48&&str1.a[i]<=57)
			tmp++;
	}
	cout<<tmp;
	//printf("%d %d ",'0','9');
	return 0;
}
