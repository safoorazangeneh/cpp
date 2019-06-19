#include<iostream>
#include<conio.h>
using namespace std;
void foo(int n){
	int number,p=0,N=0,Z=0;
	for(int i=1;i<=n;i++){
		cin>>number;
		if(number>0)
		p++;
		else if(number<0)
		N++;
		else if(number==0)
		Z++;
	
	}
	cout<<"p:"<<p<<"N:"<<N<<"Z:"<<Z;
}


main(){
		int n;
		cin>>n;
		foo(n);
	
		
		

	}
