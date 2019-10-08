#include<bits/stdc++.h>
using namespace std;
float x;
float y;
int tmp;
int main(){
	cin>>x;
	if(x>=0&&x<5){
		tmp=1;
	}
	if(x>=5&&x<10){
		tmp=2;
	}
	if(x>=10&&x<20){
		tmp=3;
	}
	switch(tmp){
		case(1):
			y=0-x+2.5;
			break;
		case(2):
			y=2-1.5*(x-3)*(x-3);
			break;
		case(3):
			y=(x/2.0)-1.5;
			break;
	}
	printf("%.3f",y);
	return 0;
}
