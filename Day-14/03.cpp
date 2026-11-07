// Pass by value

// Enter the number :4 7
// 4 7

#include<iostream>
using namespace std;

void swap(int a,int b){ // pass by value
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

void swap(int &a,int &b){ // pass by referance
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

// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


//Enter the number :4 9
//9 4
//3.6 4.8

#include<iostream>
using namespace std;

void swap(int &a,int &b){  // pass by referance
	int c;
	c=a;
	a=b;
	b=c;
}

void swap(float &c,float &d){  // function overloading 
	float r =c;
	c=d;
	d=r;
}

int main(){
	int a,b;
	cout<<"Enter the number :";
	cin>>a>>b;
	
	swap(a,b);
	cout<<a<<" "<<b<<" "<<endl;
	
	float f1=4.8,f2=3.6;
	swap(f1,f2);
	cout<<f1<<" "<<f2;
	
}


// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ (Built-in Function) +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++



//Enter the number :4 9
//9 4
//3.6 4.8

#include<iostream>
using namespace std;


int main(){
	int a,b;
	cout<<"Enter the number :";
	cin>>a>>b;
	
	swap(a,b);                   // swap() is a built-in funciton
	cout<<a<<" "<<b<<" "<<endl;
	
	float f1=4.8,f2=3.6;
	swap(f1,f2);                // swap() is a built-in funciton
	cout<<f1<<" "<<f2;
	
}
