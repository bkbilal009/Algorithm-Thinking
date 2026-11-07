// Pass by value

// Enter the number :4 7
// 4 7

#include<iostream>
using namespace std;

void swap(int a,int b){
	int c;
	c=a;
	a=b;
	b=c;
}

int main(){
	int a,b;
	cout<<"Enter the number :";
	cin>>a>>b;
	
	swap(a,b);
	cout<<a<<" "<<b<<" ";
	
}


// Pass by referance 

// Enter the number :4 7
// 7 4

#include<iostream>
using namespace std;

void swap(int &a,int &b){
	int c;
	c=a;
	a=b;
	b=c;
}

int main(){
	int a,b;
	cout<<"Enter the number :";
	cin>>a>>b;
	
	swap(a,b);
	cout<<a<<" "<<b<<" ";
	
}
