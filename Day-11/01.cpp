//Enter the input : 15
//Natural number : 1
//Natural number : 2
//Natural number : 3
//Natural number : 4
//Natural number : 5
//Natural number : 6
//Natural number : 7
//Natural number : 8
//Natural number : 9
//Natural number : 10
//Natural number : 11
//Natural number : 12
//Natural number : 13
//Natural number : 14
//Natural number : 15


#include<iostream>
using namespace std;

int main(){
	
	int n; // declaration
	cout<<"Enter the input : "; // user input
	cin>>n;
	int i=1; // initialzation
	
	while(i<=n){ // Break condition
		cout<<"Natural number : "<<i<<endl;
		i++; // updation
	}
}
