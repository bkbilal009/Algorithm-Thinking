//Enter the input :10
//1
//2
//3
//4
//5
//6
//7
//8
//9
//10


#include<iostream>
using namespace std;

int main(){
	
	int n;
	cout<<"Enter the input :";
	cin>>n;
	int i=1; // initialization
	do{
		cout<<i<<endl;
		i++; // updation
	}
	while(i<=n); // break
}
