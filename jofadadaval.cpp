#include<iostream>
#include<conio.h>
using namespace std;
main(){
	int a,b,i,n=0;
	for(int a=1;a<=100;a++){
		for(int b=1;b<=100;b++){
			n=0;
			for(int i=1;i<=b;i++){
				if(a%i==0&&b%i==0)
				++n;	
			}
			if(n==1)
			cout<<a<<'\t'<<b<<endl;
			getch();
			
		}
	}
}
