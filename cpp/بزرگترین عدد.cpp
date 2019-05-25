#include<iostream>
#include<conio.h>
using namespace std;
main(){
	int a,b,c,max;
	cin>>a>>b>>c;
	max=a;
	if(b>max)
	max=b;
	if(c>max)
	max=c;
	cout<<max;
	getch();
}
