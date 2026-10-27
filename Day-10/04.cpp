#include<iostream>
using namespace std;

int main(){
	// Bitwise operator
	
	// & Operator
	
	int ans = 2&3;
	cout<<ans<<endl; // 2
	
	int ans = 2|3;
	cout<<ans<<endl; // 3

	int ans = 2^3;
	cout<<"My answer is : "<<ans<<endl; // 1

	int ans = 2>>3;
	cout<<"My answer is : "<<ans<<endl; // 0
	
	int ans = 2<<3;
	cout<<"My answer is : "<<ans<<endl; // 16


	// Complement
	
	int ans = ~3;
	cout<<"My answer is : "<<ans<<endl; // -4
	
	int an = ~8;
	cout<<"My answer is : "<<an<<endl; // -9
	
	int a = ~43;
	cout<<"My answer is : "<<a<<endl; // -44
	
	
	int ans = ~-3;
	cout<<"My answer is : "<<ans<<endl; // 2
	
	int an = ~-8;
	cout<<"My answer is : "<<an<<endl; // 7
	
	int a = ~-43;
	cout<<"My answer is : "<<a<<endl; // 42
	
}
