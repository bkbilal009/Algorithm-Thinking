// Find rectangle sides 


#include<iostream>
using namespace std;

int main(){
	int a,b,c,d;
	cout<<"Enter your number : ";
	cin>>a>>b>>c>>d;
	
	if ((a==b && c==d) || (a==c && b==d) || (a==d && b==c)){
		cout<<"1";
	}
	else{
		cout<<"0";
	}
}
