#include<iostream>
#include<conio.h>
using namespace std;
main(){
	string strGrand;
	int num;
	cout<<"Enter anumber";
	cin>>num;
	if(num>=0 && num<50)
	    strGrand="fail";
	else if(num>=50 && num<60)
		strGrand="Grand D";
	else if(num>=60 && num<70)
		strGrand="Grande c";
	else if(num>=70 && num<80)
		strGrand="Grande B";
	else if(num>=80 && num<90)
		strGrand="Grande A";
	else if(num>=90 && num<=100)
		strGrand="Grande A+";
	else
	     strGrand="unknow";
	     cout<<strGrand;
		
		
		
		
		
		
}
