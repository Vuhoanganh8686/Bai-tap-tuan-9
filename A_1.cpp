#include<iostream>
using namespace std;

char *concat(const char* a1, const char* 2){
	int n=0;
	while(*(a1+n)!='\0'){
		n++;
	}
	int t=0;
	while(*(a2+t)!='\0'){
		t++;
	}
	char* a=new char;
	for(int i=0;i<n;i++){
		a[i]=a1[i];
	}
	for(int i=0;i<t;i++){
		a[i+n]=a2[i];
	}
	return a;
}

int main(){
	const char* a=new char;
	a=concat("Viet","ANh");
	cout<<a;
	return 0;
}
