#include<iostream>
using namespace std;

int main(){
	cout<<13.7/2; // output : 6.85
	cout<<13.2*4; // output : 52.8
	cout<<4*13;   // output : 52
	cout<<4*13.2; // ouptut : 52.8


// Unary operator 
  
  int a=10;
  cout<<a++; // 10
  cout<<endl<<a; // 11


	int a=10;
	int b=a++;
	cout<<b<<" "<<a; // output : 10 , 11
	
	
	int a=10;
	int b=++a;
	cout<<b<<" "<<a; // output : 11 , 11
	
	int a=10;
	int b=--a;
	cout<<b<<" "<<a; // output : 9 , 9
	
	int a=10;
	int b=a--;
	cout<<b<<" "<<a; // output : 10 , 9
	
	

}
