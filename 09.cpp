#include<iostream>
#include<conio.h>
using namespace std;
void foo();
main(){
	foo();
	}
void foo(){
		int x,y;
		cin>>x>>y;
		for(int i=1; i<=x;i++)
			if(x%i==0 && y%i==0)
			cout<<i<<endl;}
		
