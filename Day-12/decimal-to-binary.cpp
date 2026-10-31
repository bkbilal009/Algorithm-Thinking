//Enter the input : 13
//1101
//Enter the input : 145
//10010001


#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter the input : ";
	cin>>num;
	
	int rem,ans=0,mul=1;
	
	while(num>0){
		// reminder
		rem=num%2;
		// quotient
		num=num/2;
		// answer
		ans=rem*mul+ans;
		// multiplication
		mul=mul*10;
	}
	cout<<ans<<endl;
}
