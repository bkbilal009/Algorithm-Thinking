//Enter the input: 1101
//13
//Enter the input: 110010
//50


#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter the input: ";
	cin>>num;
	
	int rem,mul=1,ans=0;
	
	while(num>0){
		// reminder
		rem = num%10;
		// num--> divide
		num = num/10;
		// answer
		ans = mul*rem+ans;
		// multiplication
		mul = mul*2;
	}
	cout<<ans<<endl;
}
