#include<iostream>
#include<conio.h>
using namespace std;
int max(int[],int);
main(){
	int tedad;
	cout<<"enter tedad:";
	cin>>tedad;
	int hoghugh[tedad];
	int maximum;
	float maliat;
	int shomare[tedad];
	for(int i=0;i<tedad;i++){
		cout<<"hoghugh:";
		cin>>hoghugh[i];
		if(hoghugh[i]<400000)
			maliat=0;
		if(hoghugh[i]<400001&&hoghugh[i]<500000)
			maliat=(hoghugh[i]-400000)/10;
		if(hoghugh[i]<500001&&hoghugh[i]<700000)
			maliat=((hoghugh[i]-400000)*15)/100;
		if(hoghugh[i]>700000)
			maliat=((hoghugh[i]-400000)*17)/100;
		cout<<"maliat:"<<maliat<<endl;		
	}
	for(int i=0;i<tedad;i++){
		cout<<"shomare karmand:";
		cin>>shomare[i];	
	}
	maximum=max(hoghugh,tedad);
	for(int i=0;i<tedad;i++){
		if(maximum==hoghugh[i])
		cout<<"bishtarin dariaft:"<<shomare[i];
	}	
}
int max(int hoghugh[],int tedad){
	int maximum=hoghugh[0];
	for(int i=0;i<tedad;i++){
		if(hoghugh[i]>maximum)
			maximum=hoghugh[i];	
	}
	return maximum;
	getch();
}

