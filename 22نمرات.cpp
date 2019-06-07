#include<iostream>
#include<conio.h>
using namespace std;
main(){
	int limit,counter=1,number,max,min;
	cout<<"please enter anember";
	cin>>limit;
	while(counter<=2){
		cout<<"please enter your score";
		cin>>number;
		min=number;
		max=number;
		while(counter<limit){
			cout<<"please enter your score";
			cin>>number;
			if(number<min)
			min=number;
			if(number>max)
			max=number;
			++counter;
		}
		++counter;}
		cout<<"max="<<max<<'\t'<<"min="<<min;
			
		}
	
