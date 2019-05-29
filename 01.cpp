#include<iostream>
#include<conio.h>
using namespace std;
main(){
	int num;
	string strMessage;
	cout<< "enter a number:";
	cin>>num;
	switch(num){
		case 10:strMessage="the number is 10";break;
		case 20:strMessage="the number is 20";break;
		case 30:strMessage="the number is 30";break;
		default:strMessage="Unknown";
	}
	cout<<"the number is:"<<strMessage;
}
