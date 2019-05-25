#include<iostream>
#include<conio.h>
using namespace std;
main(){
	int a,b,c,max;
	cin>>a>>b>>c;
	max=a;
	if(b>max)
	b=max;
	if(c>max)
	c=max;
	cout<<max;
	getch();
}
