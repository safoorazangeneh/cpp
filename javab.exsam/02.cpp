#include<iostream>
#include<conio.h>
using namespace std;
int bishtarin1(float A[]);
int bishtarin2(float A[]);
int bishtarin3(float A[]);
int maxim(int,int,int);
main(){
	
	float a[4];
	int m1,m2,m3,max;
	for(int i=0;i<4;i++){
		cout<<"enter a[i]:";
		cin>>a[i];
	}
	m1=bishtarin1(a);
	m2=bishtarin2(a);
	m3=bishtarin3(a);
	max=maxim(m1,m2,m3);
	if(max==m1)
		cout<<"bishtarin tekrar:"<<a[0]<<'\t'<<"tedad tekrar:"<<m1<<endl;
	if(max==m2)
		cout<<"bishtarin tekrar:"<<a[1]<<'\t'<<"tedad tekrar:"<<m2<<endl;
	if(max==m3)
		cout<<"bishtarin tekrar:"<<a[2]<<'\t'<<"tedad tekrar:"<<m3;	
}
int bishtarin1(float A[]){
	int a1=1;
	for(int i=1;i<4;i++){
		if(A[0]==A[i])
		++a1;
	}
	return a1;
}
int bishtarin2(float A[]){
	int a2=1;
	for(int i=2;i<4;i++){
		if(A[1]==A[i])
		++a2;
	}
	return a2;
}
int bishtarin3(float A[]){
	int a3=1;
	for(int i=3;i<4;i++){
		if(A[2]==A[i])
		++a3;
	}
	return a3;
}
int maxim(int m1,int m2,int m3){
	int max=m1;
	if(m2>max)
		max=m2;
	if(m3>max)
	max=m3;
	return max;
	getch();
}

