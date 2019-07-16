#include<iostream>
#include<conio.h>
using namespace std;
main(){
	string p,t;
	int i,n=0;
	for(i=0;i<5;i++){
		cin>>p;
		if(p.length()>n){
			n=p.length();
			t=p;
		}
	}
	cout<<t<<endl;
	getch();
}
